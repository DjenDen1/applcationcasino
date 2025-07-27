#include "blackjack.h"
#include "mainwindow.h"
#include "ui_blackjack.h"
#include "settings.h"
#include "mainwindowlootgames.h"

#include "globals.h"
#include <QPixmap>
#include <QRandomGenerator>
#include <QVBoxLayout>
#include <QMessageBox>

class MainWindowlootgames;
class Settings;

int amountPlaysNOW = 0;

BlackJack::BlackJack(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BlackJack) , mainwindowlootgames(nullptr) , settings(nullptr)
{
    ui->setupUi(this);

    updateTimer = new QTimer(this);
    connect(updateTimer, &QTimer::timeout, this , &::BlackJack::UPDATELCD);
    updateTimer -> start(100);

    QString imagePath = "";

    playerLayout = new QHBoxLayout;
    dealerLayout = new QHBoxLayout;

    ui->widget->setLayout(playerLayout);
    ui->widget_3->setLayout(dealerLayout);



    initDeck();
    shuffleDeck();
    dealInitialCards();
    updateUI();
}

BlackJack::~BlackJack()
{
    delete ui;
}

void BlackJack::on_pushButton_clicked()
{
    if(!mainwindowlootgames)
    {
        this -> hide();
        mainwindowlootgames = new class MainWindowlootgames(this);
        mainwindowlootgames -> show();
    }
}


void BlackJack::initDeck()
{
    QStringList suits = {"hearts", "diamonds", "clubs", "spades"};
    QStringList ranks = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "jack", "queen", "king", "ace"};
    QList<int> values = {2,3,4,5,6,7,8,9,10,10,10,10,11};

    deck.clear();

        int imageIndex = 1;

    for (const QString &suit : suits) {
        for (int i = 0; i < ranks.size(); ++i) {
            Card card;
            card.rank = ranks[i];
            card.suit = suit;
            card.value = values[i];
            card.imagePath = QString(":/source/blackjack/card%1.jpg").arg(imageIndex++, 2, 10, QChar('0')); // arg(ranks[i], suit)
            deck.append(card);
        }
    }
}

void BlackJack::shuffleDeck()
{
    std::shuffle(deck.begin(), deck.end(), *QRandomGenerator::global());
}

Card BlackJack::drawCard()
{
    Card card = deck.takeFirst();
    return card;
}

void BlackJack::dealInitialCards()
{
    playerHand.clear();
    dealerHand.clear();

    playerHand.append(drawCard());
    dealerHand.append(drawCard());
    playerHand.append(drawCard());
    dealerHand.append(drawCard());
}

void BlackJack::updateUI()
{

    clearLayouts();

    for (const Card &card : playerHand) {
        showCard(card, playerLayout);
    }

    for (const Card &card : dealerHand) {
        showCard(card, dealerLayout);
    }
}

void BlackJack::showCard(const Card &card, QHBoxLayout *layout)
{
    QLabel *label = new QLabel(this);
    QPixmap pix(card.imagePath);
    label->setPixmap(pix.scaled(80, 120, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    layout->addWidget(label);
}

int BlackJack::calculateScore(const QVector<Card> &hand)
{
    int score = 0;
    int aces = 0;

    for (const Card &card : hand) {
        score += card.value;
        if (card.rank == "ace") aces++;
    }

    while (score > 21 && aces > 0) {
        score -= 10;
        aces--;
    }

    return score;
}

void BlackJack::onHitClicked()
{
    playerHand.append(drawCard());
    updateUI();

    int score = calculateScore(playerHand);
    if (score > 21) {
        ui->statusbar->showMessage("Player busts! Dealer wins.");
    }
}

void BlackJack::onStandClicked()
{

    if(playerChips <= 0)
    {
        QMessageBox::critical(this, "Игра" , "у вас нет фишек , держите бонусом 10.000");
        playerChips+=10000;

    }
    while (calculateScore(dealerHand) < 17) {
        dealerHand.append(drawCard());
    }

    updateUI();

    int playerScore = calculateScore(playerHand);
    int dealerScore = calculateScore(dealerHand);

    QString result;
    if (dealerScore > 21 || playerScore > dealerScore)
    {
        result = "Player wins!";

        playerChips+=currentBet;
        amountPlaysNOW+=1;
        amountWINRATE_BLACKJACK+=1;


    }
    else if (playerScore < dealerScore)
    {
        result = "Dealer wins!";

        playerChips-=currentBet;
        amountPlaysNOW+=1;
        amountLOSERATE_BLACKJACK+=1;

    }

    else
        result = "Draw!";

    ui->statusbar->showMessage(result);
}

void BlackJack::on_pushButton_2_clicked()
{
    onHitClicked();
}


void BlackJack::on_pushButton_3_clicked()
{
    onStandClicked();
}


void BlackJack::clearLayouts()
{
    QLayoutItem *item;

    while ((item = playerLayout->takeAt(0)) != nullptr) {
        QWidget *widget = item->widget();
        if (widget) {
            widget->setParent(nullptr);  // убирает из иерархии
            delete widget;               // удаляет безопасно
        }
        delete item;
    }

    while ((item = dealerLayout->takeAt(0)) != nullptr) {
        QWidget *widget = item->widget();
        if (widget) {
            widget->setParent(nullptr);
            delete widget;
        }
        delete item;
    }
}


void BlackJack::on_pushButton_4_clicked()
{
    playerHand.clear();
    dealerHand.clear();
    clearLayouts();

    shuffleDeck();
    dealInitialCards();
    updateUI();



}


void BlackJack::on_lcdNumber_overflow()
{

}

void BlackJack::UPDATELCD()
{

    ui-> lcdNumber -> display(playerChips);
    ui-> lcdNumber_2 -> display(currentBet);

    ui-> lcdNumber_3 -> display(amountPlaysNOW);
    ui-> lcdNumber_4 -> display(amountWINRATE_BLACKJACK);
    ui-> lcdNumber_5 -> display(amountLOSERATE_BLACKJACK);

}

void BlackJack::on_pushButton_5_clicked()
{

}


void BlackJack::on_lcdNumber_2_overflow()
{

}


void BlackJack::on_lcdNumber_3_overflow()
{

}


void BlackJack::on_lcdNumber_4_overflow()
{

}


void BlackJack::on_lcdNumber_5_overflow()
{

}


void BlackJack::on_pushButton_6_clicked()
{
    settings = new Settings(this);
    settings -> show();
    if(!settings)
    {

        settings -> show();


    }
}


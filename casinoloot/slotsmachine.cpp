#include "slotsmachine.h"
#include "globals.h"
#include <QFont>
#include <cstdlib>
#include <ctime>

class Settings;

SlotsMachine::SlotsMachine(QWidget *parent)
    : QWidget(parent), spinCount(0) , settings(nullptr)
{
    srand(static_cast<unsigned>(time(nullptr)));

    symbols << "🍒" << "🔔" << "🍋" << "⭐️" << "💎" << "💊";

    reel1 = new QLabel("🍒", this);
    reel2 = new QLabel("🍋", this);
    reel3 = new QLabel("⭐️", this);



    QFont font;
    font.setPointSize(72);
    reel1->setFont(font);
    reel2->setFont(font);
    reel3->setFont(font);
    reel1->setAlignment(Qt::AlignCenter);
    reel2->setAlignment(Qt::AlignCenter);
    reel3->setAlignment(Qt::AlignCenter);

    spinButton = new QPushButton("Spin", this);
    connect(spinButton, &QPushButton::clicked, this, &SlotsMachine::spin);
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &SlotsMachine::updateReels);

    QHBoxLayout *reelsLayout = new QHBoxLayout;
    reelsLayout->addWidget(reel1);
    reelsLayout->addWidget(reel2);
    reelsLayout->addWidget(reel3);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addLayout(reelsLayout);
    mainLayout->addWidget(spinButton);
    setLayout(mainLayout);
}

void SlotsMachine::spin()
{

   if(playerChips > currentBet)
    {

        spinButton->setEnabled(false);
        spinCount = 0;
        timer->start(100);

   }
    else
    {

            QMessageBox::critical(this, "Игра" , "у вас нет фишек , держите бонусом 10.000");
            playerChips+=10000;

    }


}
void SlotsMachine::updateReels()
{

    if (currentBet > 1000)

    {

        bool lucky = (qrand() % 5 == 0); // 1 из 5 шансов на выигрыш (20%)

        if (lucky)
        {
                QString winSymbol = symbols[qrand() % symbols.size()];
                reel1->setText(winSymbol);
                reel2->setText(winSymbol);
                reel3->setText(winSymbol);
        }
        else
        {
                reel1->setText(symbols[qrand() % symbols.size()]);
                reel2->setText(symbols[qrand() % symbols.size()]);
                reel3->setText(symbols[qrand() % symbols.size()]);
        }
        spinCount++;

        if (spinCount >= 10)
        {
            timer->stop();
            spinButton->setEnabled(true);


            QString r1 = reel1->text();
            QString r2 = reel2->text();
            QString r3 = reel3->text();

            if (r1 == r2 && r2 == r3)
            {
                playerChips += currentBet;
                QMessageBox::information(this, "Результат", "Вы выиграли!");
                timesslotsnow+=1;
                winrate_automat+=1;
    }
        else

        {
            playerChips -= currentBet;
            QMessageBox::information(this, "Результат", "Вы проиграли.");
            timesslotsnow+=1;
            loserate_automat+=1;
        }

    }

    }
    if (currentBet < 1000)
    {
        bool lucky = (qrand() % 3 == 0); // 1 из 3 шансов на выигрыш (20%)

        if (lucky) {
            QString winSymbol = symbols[qrand() % symbols.size()];
            reel1->setText(winSymbol);
            reel2->setText(winSymbol);
            reel3->setText(winSymbol);
        } else {
            reel1->setText(symbols[qrand() % symbols.size()]);
            reel2->setText(symbols[qrand() % symbols.size()]);
            reel3->setText(symbols[qrand() % symbols.size()]);
        }
        spinCount++;

        if (spinCount >= 10)
        {
            timer->stop();
            spinButton->setEnabled(true);


            QString r1 = reel1->text();
            QString r2 = reel2->text();
            QString r3 = reel3->text();

            if (r1 == r2 && r2 == r3)
            {
                playerChips += currentBet;
                QMessageBox::information(this, "Результат", "Вы выиграли!");
                timesslotsnow+=1;
                winrate_automat+=1;
            }
            else

            {
                playerChips -= currentBet;
                QMessageBox::information(this, "Результат", "Вы проиграли.");
                timesslotsnow+=1;
                loserate_automat+=1;
            }

        }

    }


}

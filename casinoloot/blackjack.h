#ifndef BLACKJACK_H
#define BLACKJACK_H


#include "settings.h"
#include <QMainWindow>
#include <QHBoxLayout>
#include <QMap>
#include <QVector>
#include <QLabel>

class MainWindowlootgames;
class Settings;
QT_BEGIN_INCLUDE_NAMESPACE

namespace Ui {
class BlackJack;
class MainWindowlootgames;
class Settings;
}

QT_END_NAMESPACE

struct Card
{
    QString rank;
    QString suit;
    int value;
    QString imagePath;
};
struct Player
{
    QString name;
    QString suit;
    QVector<Card> hand;
    int score ;
    bool busted = false;

};
class BlackJack : public QMainWindow
{
    Q_OBJECT

public:
    explicit BlackJack(QWidget *parent = nullptr);
    ~BlackJack();

    BlackJack();
    void hitButton();
    void nextTurn();
    void startGame();


    void onStandClicked();
    void onHitClicked();

    void setupUI();

    void initDeck();
    void shuffleDeck();
    Card drawCard();
    void dealInitialCards();
    void updateUI();
    void showCard(const Card &card, QHBoxLayout *layout);
    int calculateScore(const QVector<Card> &hand);


    void UPDATELCD();


    void clearLayouts();




private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();



    void on_pushButton_4_clicked();

    void on_lcdNumber_overflow();

    void on_pushButton_5_clicked();

    void on_lcdNumber_2_overflow();

    void on_lcdNumber_3_overflow();

    void on_lcdNumber_4_overflow();

    void on_lcdNumber_5_overflow();

    void on_pushButton_6_clicked();

private:
    Ui::BlackJack *ui;
    MainWindowlootgames *mainwindowlootgames = nullptr;

    QMap<QString, QHBoxLayout*> playerCardLayouts;


    QVector<Card> deck;
    QVector<Card> playerHand;
    QVector<Card> dealerHand;

    QHBoxLayout *playerLayout;
    QHBoxLayout *dealerLayout;
    Settings *settings;
    QTimer *updateTimer;

};

#endif // BLACKJACK_H

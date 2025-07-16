#ifndef MAINWINDOWLOOTGAMES_H
#define MAINWINDOWLOOTGAMES_H

#include "blackjack.h"
#include "roulettegame.h"
#include <QMainWindow>

// classes
class MainWindow;
class RouletteGame;
class ThreeCardPokerGame;
class HorseRacingGame;
class BlackJack;
class AutomatGame;

namespace Ui {

class MainWindowlootgames;
class MainWindow;
class RouletteGame;
class ThreeCardPokerGame;
class HorseRacingGame;
class BlackJack;
class AutomatGame;

}

class MainWindowlootgames : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowlootgames(QWidget *parent = nullptr);
    ~MainWindowlootgames();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindowlootgames *ui;
    MainWindow *mainwindow = nullptr;
    RouletteGame *roulettegame = nullptr;
    ThreeCardPokerGame *threecardpokergame = nullptr;
    HorseRacingGame *horseracinggame = nullptr;
    BlackJack *blackjack = nullptr;
    AutomatGame *automatgame = nullptr;


};

#endif // MAINWINDOWLOOTGAMES_H

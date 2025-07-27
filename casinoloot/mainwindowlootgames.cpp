// подключаемые окна
#include "mainwindow.h"

#include "mainwindowlootgames.h" // окно для выборв одного из пяти игр
#include "ui_mainwindowlootgames.h"


#include "roulettegame.h"   // игра с рулеткой

#include "threecardpokergame.h" // трёхкарточный покер

#include "blackjack.h" // блэкжек

#include "automatgame.h" // автомат игра
#include "horseracinggame.h"

//Classes
class MainWindow;
class RouletteGame;
class ThreeCardPokerGame;
class HorseRacingGame;
class BlackJack;
class AutomatGame;

MainWindowlootgames::MainWindowlootgames(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowlootgames) , mainwindow(nullptr) , roulettegame(nullptr) , threecardpokergame(nullptr) , horseracinggame(nullptr) , blackjack(nullptr) , automatgame(nullptr)
{
    ui->setupUi(this);
    setWindowTitle("игры");
}

MainWindowlootgames::~MainWindowlootgames()
{
    delete ui;
}




void MainWindowlootgames::on_pushButton_clicked()
{
    if(!mainwindow)
    {
    this -> hide();
    mainwindow = new class MainWindow(this);
    mainwindow -> show();
    }
}


void MainWindowlootgames::on_pushButton_2_clicked()
{
    if(!roulettegame)
    {
    this -> hide();
    roulettegame = new class RouletteGame(this);
    roulettegame -> showFullScreen();

    }
}





void MainWindowlootgames::on_pushButton_3_clicked()
{
    if(!threecardpokergame)
    {
        this -> hide();
        threecardpokergame = new class ThreeCardPokerGame(this);
        threecardpokergame -> show();

    }
}


void MainWindowlootgames::on_pushButton_6_clicked()
{

    if(!horseracinggame)
    {
        this -> hide();
        horseracinggame = new class HorseRacingGame(this);
        horseracinggame -> show();

    }

}


void MainWindowlootgames::on_pushButton_4_clicked()
{
    if(!blackjack)
    {
        this -> hide();
        blackjack = new class BlackJack(this);
        blackjack -> show();
    }

}


void MainWindowlootgames::on_pushButton_5_clicked()
{
    if(!automatgame)
    {
        this -> hide();
        automatgame = new class AutomatGame(this);
        automatgame -> show();
    }
}


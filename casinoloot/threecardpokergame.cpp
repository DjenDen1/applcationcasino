#include "threecardpokergame.h"
#include "ui_threecardpokergame.h"

#include "mainwindowlootgames.h"


class MainWindowlootgames;

ThreeCardPokerGame::ThreeCardPokerGame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ThreeCardPokerGame) , mainwindowgames(nullptr)
{
    ui->setupUi(this);
     setWindowTitle("Трёхкарточный покер");
}

ThreeCardPokerGame::~ThreeCardPokerGame()
{
    delete ui;
}

void ThreeCardPokerGame::on_pushButton_clicked()
{
    if(!mainwindowgames)
    {
        this -> hide();
        mainwindowgames = new class MainWindowlootgames(this);
        mainwindowgames -> show();
    }

}


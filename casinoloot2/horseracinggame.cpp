#include "horseracinggame.h"
#include "ui_horseracinggame.h"


#include "mainwindowlootgames.h"

class MainWindowlootgames;

HorseRacingGame::HorseRacingGame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HorseRacingGame) , mainwindowgames(nullptr)
{
    ui->setupUi(this);
    setWindowTitle("Cкачки на лошадях");
}

HorseRacingGame::~HorseRacingGame()
{
    delete ui;
}

void HorseRacingGame::on_pushButton_clicked()
{
    if(!mainwindowgames)
    {
        this -> hide();
        mainwindowgames = new class MainWindowlootgames(this);
        mainwindowgames -> show();
    }
}


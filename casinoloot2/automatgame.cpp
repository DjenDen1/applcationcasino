#include "automatgame.h"
#include "globals.h"
#include "ui_automatgame.h"

#include "mainwindowlootgames.h"

#include "slotsmachine.h"

class MainWindowlootgames;
class SlotsMachine;

#include <QVBoxLayout>
#include <QPainter>

#include "settings.h"

class Settings;

AutomatGame::AutomatGame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AutomatGame) , mainwindowlootgames(nullptr) , slotsmachine(nullptr) , settings(nullptr)
{
    ui->setupUi(this);
    setWindowTitle("Автомат");

    slotsmachine =  new class SlotsMachine(this);

    QWidget *central = new QWidget(this);
    QVBoxLayout *layout  = new QVBoxLayout(central);



    layout -> addWidget(slotsmachine);


    central -> setLayout(layout);
    //setCentralWidget(central);

    slotsmachine = new SlotsMachine(this);
    slotsmachine -> resize(800,750);
    slotsmachine -> show();

    ui -> lcdNumber -> display(playerChips);



}

AutomatGame::~AutomatGame()
{
    delete ui;
}



void AutomatGame::on_pushButton_2_clicked()
{
    if(!mainwindowlootgames)
    {
        this -> hide();
        settings -> hide();
        mainwindowlootgames = new class MainWindowlootgames(this);
        mainwindowlootgames -> show();
    }
}


void AutomatGame::on_lcdNumber_overflow()
{

}


void AutomatGame::on_pushButton_3_clicked()
{
    ui -> lcdNumber -> display(playerChips);
}


void AutomatGame::on_pushButton_4_clicked()
{
    settings = new Settings(this);
    settings -> show();
    if(!settings)
    {

    settings -> show();

    }
}


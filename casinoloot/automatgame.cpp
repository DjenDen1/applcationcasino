#include "automatgame.h"
#include "globals.h"
#include "ui_automatgame.h"
#include "settings.h"
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

    connect(ui->pushButtonY, &QPushButton::clicked, slotsmachine, &SlotsMachine::spin);


    slotsmachine = new SlotsMachine(this);
    QVBoxLayout *layout = new QVBoxLayout(ui->widget_3);                                                                                                                                                    // slotsmachine -> resize(800,750);

    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(slotsmachine);

    updateTimer = new QTimer(this);
    connect(updateTimer , &QTimer::timeout, this , &AutomatGame::UPDATELCD);
    updateTimer -> start(100);



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
        if(settings) settings-> hide();

        mainwindowlootgames = new class MainWindowlootgames(this);
        mainwindowlootgames -> show();
    }

}


void AutomatGame::on_lcdNumber_overflow()
{

}


void AutomatGame::on_pushButton_3_clicked()
{

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


void AutomatGame::on_lcdNumber_2_overflow()
{



}


void AutomatGame::on_label_linkActivated(const QString &link)
{

}


void AutomatGame::on_widget_3_customContextMenuRequested(const QPoint &pos)
{

}



void AutomatGame::on_pushButtonY_clicked()
{
    if(slotsmachine) slotsmachine -> spin();


}

void AutomatGame::UPDATELCD()
{
    ui ->lcdNumber -> display(playerChips);
    ui ->lcdNumber_2 -> display(currentBet);

    ui ->lcdNumber_3 -> display(timesslotsnow);
    ui->lcdNumber_4 -> display(winrate_automat);
    ui->lcdNumber_5 -> display(loserate_automat);

}

void AutomatGame::on_lcdNumber_3_overflow()
{

}


void AutomatGame::on_lcdNumber_4_overflow()
{

}


void AutomatGame::on_lcdNumber_5_overflow()
{

}


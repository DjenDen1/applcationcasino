#include "automatgame.h"
#include "ui_automatgame.h"

#include "mainwindowlootgames.h"

#include "slotsmachine.h"

class MainWindowlootgames;
class SlotsMachine;

#include <QVBoxLayout>

AutomatGame::AutomatGame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AutomatGame) , mainwindowlootgames(nullptr) , slotsmachine(nullptr)
{
    ui->setupUi(this);
    setWindowTitle("Автомат");
    slotsmachine =  new class SlotsMachine(this);

    QWidget *central = new QWidget(this);
    QVBoxLayout *layout  = new QVBoxLayout(central);
    layout -> addWidget(slotsmachine);

    central -> setLayout(layout);
    setCentralWidget(central);
    resize(500,400);
    slotsmachine -> show();


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
        mainwindowlootgames = new class MainWindowlootgames(this);
        mainwindowlootgames -> show();
    }
}


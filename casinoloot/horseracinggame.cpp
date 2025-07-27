#include "horseracinggame.h"
#include "mainwindow.h"
#include "ui_horseracinggame.h"
#include "settings.h"
#include "globals.h"
#include "mainwindowlootgames.h"


#include <QRandomGenerator>
#include <QMessageBox>

class MainWindowlootgames;
class Settings;
int betindex;
int horseTIMES = 0;
HorseRacingGame::HorseRacingGame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HorseRacingGame) , mainwindowgames(nullptr) , raceTimer(new QTimer(this)) , finishX(600) , settings(nullptr)
{
    ui->setupUi(this);
    setWindowTitle("Cкачки на лошадях");

    updateTimer = new QTimer(this);
    connect(updateTimer , &QTimer::timeout, this , &HorseRacingGame::UPDATELCD);
    updateTimer -> start(100);


    for (int i = 0; i < 4; ++i) {
        QLabel *horse = new QLabel(this);
        QString imagePath = QString(":/source/horseracing/horse%1.png").arg(i + 1);
        QPixmap pix(imagePath);


        horse->setPixmap(pix.scaled(80, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        horse->setGeometry(10, 50 + i * 60, 80, 50);
        horse->show();

        horseLabels.append(horse);
        positions.append(10);
    }

    connect(raceTimer, &QTimer::timeout, this, &::HorseRacingGame::updateRace);
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



void HorseRacingGame::resetRace() {
    for (int i = 0; i < horseLabels.size(); ++i) {
        positions[i] = 10;
        horseLabels[i]->move(positions[i], 50 + i * 60);
    }
}

void HorseRacingGame::updateRace() {
    for (int i = 0; i < horseLabels.size(); ++i) {
        int step = QRandomGenerator::global()->bounded(1, 7);
        positions[i] += step;
        horseLabels[i]->move(positions[i], 50 + i * 60);

        if (positions[i] >= finishX)
        {
            raceTimer->stop();
            declareWinner(i);

            if(betindex == i)
            {
                playerChips+=currentBet;
                WINRATEhorse+=1;
                horseTIMES+=1;
            }
            else
            {
                playerChips-=currentBet;
                LOSERATEhorse+=1;
                horseTIMES+=1;
            }
            return;
        }
    }
}

void HorseRacingGame::declareWinner(int index) {
    ui->statuslabel1->setText(QString("Победила лошадь #%1!").arg(index + 1));
}

void HorseRacingGame::on_statuslabel1_linkActivated(const QString &link)
{

}


void HorseRacingGame::on_pushButton_2_clicked()
{
    resetRace();
    raceTimer->start(100);
    ui->statuslabel1->setText("Гонка началась!");
}


void HorseRacingGame::on_pushButton_3_clicked()
{
    betindex=0;
    updateRace();
}


void HorseRacingGame::on_pushButton_4_clicked()
{
    betindex = 1;
    updateRace();
}



void HorseRacingGame::on_pushButton_6_clicked()
{
    betindex = 2;
    updateRace();
}


void HorseRacingGame::on_pushButton_5_clicked()
{
    betindex = 3;
    updateRace();
}


void HorseRacingGame::on_lcdNumber_overflow()
{

}

void HorseRacingGame::UPDATELCD()
{
    ui -> lcdNumber -> display(playerChips);
    ui -> lcdNumber_2 -> display(currentBet);
    ui -> lcdNumber_3 -> display(WINRATEhorse);
    ui -> lcdNumber_4 -> display(LOSERATEhorse);
    ui -> lcdNumber_5 -> display(horseTIMES);



}
void HorseRacingGame::on_lcdNumber_2_overflow()
{

}


void HorseRacingGame::on_lcdNumber_4_overflow()
{

}


void HorseRacingGame::on_lcdNumber_3_overflow()
{

}


void HorseRacingGame::on_lcdNumber_5_overflow()
{

}


void HorseRacingGame::on_pushButton_8_clicked()
{
    settings = new Settings(this);
    settings -> show();
    if(!settings)
    {

        settings -> show();


    }
}


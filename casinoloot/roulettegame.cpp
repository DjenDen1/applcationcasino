#include <QOpenGLTexture>
#include <QGLWidget>
#include <QImage>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QTimer>

#include <QMediaPlayer>
#include <QUrl>
#include <QMediaContent>
#include <QAudioOutput>
#include <QString>


#include "settings.h"

#include "globals.h"

#include "ui_roulettegame.h"
#include "roulettegame.h"

#include "roulette.h"

#include "mainwindowlootgames.h" // окно для выборв одного из пяти игр
#include <QMessageBox>

#include <QLCDNumber>
#include <QVBoxLayout>

int amounttimesspining=0;

class MainWindowlootgames;
class Roulette;
class Settings;
QString path3 = "qrc:/source/sounds/0001186.mp3";
QMediaContent content1  = QUrl(path3);


RouletteGame::RouletteGame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RouletteGame) , mainwindowlootgames(nullptr) , roulette(nullptr) , settings(nullptr)
{

    ui->setupUi(this);





    connect(ui -> lcdNumber_2, &QLCDNumber::overflow ,settings , &Settings::MakeBet1);


    updateTimer = new QTimer(this);

    connect(updateTimer, &QTimer::timeout, this , &::RouletteGame::UPDATELCD);

    updateTimer -> start(100);

    setWindowTitle("рулетка");




    roulette = new  Roulette(this);
    settings = new Settings(this);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout -> addWidget(roulette);
   // roulette -> show();
   // settings -> show();



}

RouletteGame::~RouletteGame()
{
    delete ui;


}

void RouletteGame::on_pushButton_clicked()
{
    if(!mainwindowlootgames)
    {
        this -> hide();
        settings -> hide();
        mainwindowlootgames = new class MainWindowlootgames(this);
        mainwindowlootgames -> show();
    }

}







void RouletteGame::on_on_pushButton_2_clicked()
{
    QMediaPlayer *player1 =  new QMediaPlayer(this);

    player1 -> setMedia(content1);
    player1 -> setVolume(12);


    if (playerChips > currentBet)
    {



        player1 -> play();
        roulette -> startSpin();
        amounttimesspining+=1;


    }

    else
    {
        QMessageBox::critical(this, "Игра" , "у вас нет фишек , держите бонусом 10.000");
        playerChips+=10000;

    }




}


void RouletteGame::on_lcdNumber_overflow()
{

}



void RouletteGame::on_on_pushButton_3_clicked()
{
     ui -> lcdNumber -> display(playerChips);
}


void RouletteGame::on_on_pushButton_4_clicked()
{



    settings = new Settings(this);
    settings -> show();
    if(!settings)
    {

        settings -> show();



    }


}

void RouletteGame::on_lcdNumber_2_overflow()
{

}

void RouletteGame::UPDATELCD()
{
    ui->lcdNumber -> display(playerChips);
    ui->lcdNumber_2-> display(currentBet);
    ui->lcdNumber_3-> display(amounttimesspining);
    ui->lcdNumber_4-> display(amountroulettetimesWINRATE);
    ui->lcdNumber_5-> display(amountroulettetimesLOSERATE);
}


void RouletteGame::on_lcdNumber_3_overflow()
{

}


void RouletteGame::on_lcdNumber_5_overflow()
{

}


void RouletteGame::on_lcdNumber_4_overflow()
{

}


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


#include <QLCDNumber>
#include <QVBoxLayout>


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


    setWindowTitle("рулетка");

    ui -> lcdNumber -> display(playerChips);





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

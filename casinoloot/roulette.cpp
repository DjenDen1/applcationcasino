#include "roulette.h"
#include "settings.h"

#include "globals.h"

#include <QtOpenGL>
#include <QImage>
#include <QOpenGLTexture>
#include <QGLFormat>
#include <QOpenGLFunctions>
//#include <QDebug>
#include <QTimer>
#include <QPalette>

#include <gl/GL.h>
#include <gl/GLU.h>

#include <QMediaPlayer>
#include <QInputDialog>


/*

//#include <leptonica/allheaders.h>
//#include <opencv2/opencv.hpp>
*/
/*
#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"GLU32.lib")

*/

class Settings;
Roulette:: Roulette(QWidget *parent) : QOpenGLWidget(parent) , settings(nullptr)
{

    setGeometry(400,100,1000,900);






    qsrand(QTime::currentTime().msec());
    connect(&timer , &QTimer::timeout,this,&Roulette::updateRotation);

/*
    betbutton = new QPushButton("Сделать ставку", this);
    betbutton->setGeometry(800, 850, 150, 40);
    connect(betbutton, &QPushButton::clicked, this, &::Roulette::MakeBet);
*/


}

void Roulette::initializeGL()
{
    rouletteimage = QImage(":/source/resource/wheel5.png").convertToFormat(QImage::Format_RGBA8888);
    initializeOpenGLFunctions();
    glClearColor(0.0f,0.27f,0.0f,1.0f);

    //QString path3 = ""




}

void Roulette::resizeGL(int w, int h)
{

    glViewport(0,0,w,h);

}



void Roulette::paintGL()
{


    glClear(GL_COLOR_BUFFER_BIT  | GL_DEPTH_BUFFER_BIT);

    QPainter painter(this);
    painter.setRenderHint(QPainter::SmoothPixmapTransform,true);
    painter.setRenderHint(QPainter::Antialiasing,true);
    //painter.fillRect(rect(),Qt::white);


    int cx = width() / 2;
    int cy = height()/ 2;

    painter.translate(cx,cy);
    painter.rotate(angle);

    int iw = rouletteimage.width();
    int ih = rouletteimage.height();



    painter.drawImage(QRect(-iw/2 , -ih/2 , iw, ih),rouletteimage);

    painter.rotate(-angle);

    float rad = qDegreesToRadians(ballAngle);
    float bx = ballRaduis * qCos(rad);
    float by = ballRaduis * qSin(rad);

    painter.setBrush(Qt::white);
    painter.setPen(Qt::black);
    painter.drawEllipse(QPointF(bx*1.2f,by),13,12);

    painter.resetTransform();
    painter.setPen(Qt::white);
    painter.setFont(QFont("Arial", 16, QFont::Bold));

    //painter.drawText(10, 30, QString("Игрок: %1").arg(playername));
    // painter.drawText(10, 60, QString("Фишки: %1").arg(playerChips));
    //painter.drawText(10, 90, QString("Ставка: %1").arg(currentBet));


    painter.end();



}


void Roulette::startSpin()
{
    if(!spining)
    {
        speed = 10.0f + qrand() % 10;
        spining = true;
        timer.start(16);
    }
}

void Roulette::updateRotation()
{

    if(speed > 0.1f)
    {
        angle += speed;

        ballAngle -= speed * 1.2f;

        speed -= deceleration;

        if (angle >= 360.0f) angle -= 360.0f;

        if (ballAngle <= 0.0f) ballAngle +=360.0f;

        update();


    }
    else

    {
        spining = false;
        timer.stop();
        if (currentBet >= 1000)
        {
            bool win = (qrand() %5 == 0);
            if (win)
            {
                playerChips += currentBet;
                QMessageBox::information(this , "Результат" , "Вы выиграли");
                amountroulettetimesWINRATE+=1;

            }
            else
            {
                playerChips -= currentBet;
                QMessageBox::information(this , "Результат","Вы проиграли");
                amountroulettetimesLOSERATE+=1;
            }

            if (playerChips <= 0 )
            {
                QMessageBox::critical(this, "Игра" , "у вас нет фишек, держите бонусом 10.000");
                playerChips+=10000;
            }
        }

        if(currentBet < 1000)
        {
            bool win = (qrand() %2 == 0);
            if (win)
            {
                playerChips += currentBet;
                QMessageBox::information(this , "Результат" , "Вы выиграли");
                amountroulettetimesWINRATE+=1;

            }
            else
            {
                playerChips -= currentBet;
                QMessageBox::information(this , "Результат","Вы проиграли");
                amountroulettetimesLOSERATE+=1;
            }

            if (playerChips <= 0 )
            {
                QMessageBox::critical(this, "Игра" , "у вас нет фишек. Держите бонусом 10.000");
                playerChips+=10000;

            }
        }


    update();

    }
}




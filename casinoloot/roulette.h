#pragma once
#include <ui_roulette.h>

#include <QSurfaceFormat>

#include <QtWidgets>
#include <QtOpenGL>
#include <QOpenGLTexture>

#include <QGLWidget>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <QtOpenGL>

#include <QPushButton>

#include <QTimer>
#include <QtMath>
#include <QPainter>
#include <QImage>

#include <QString>



class Settings;
/*
#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"GLU32.lib")
*/
class Roulette : public QOpenGLWidget , protected QOpenGLFunctions
{
    Q_OBJECT
public:
     explicit Roulette(QWidget *parent = Q_NULLPTR);
    //  ~Roulette();

     QString recognizeNumber();

    void startSpin();
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();


    void setPlayerName( const QString &name);
    void setPlayerChips(int chips);

    void updateRotation();


private slots:

    //   void MakeBet();
private:

    QString playername;
    //int playerChips = 500;
    //int currentBet = 12;

    QOpenGLTexture *tabletexture;
    QOpenGLTexture *chiptexture;
    QOpenGLTexture *wheel;
    QOpenGLTexture *texturephone;
    QSurfaceFormat *format;

    QImage rouletteimage;
    QTimer timer;

    float angle = 0.0f;
    float speed = 10.0f;
    bool spining = false;
    float deceleration = 0.05f;

    // шарик

    float ballAngle = 0.0f;
    float ballRaduis = 170.0f;

    //    QPushButton *betbutton;

    Settings *settings;

    QString recognizeDigitFromImage(const QImage &image);

    QString text;


protected:


};

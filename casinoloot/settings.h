#ifndef SETTINGS_H
#define SETTINGS_H


#include <QPushButton>

#include <QtWidgets>
#include <QtOpenGL>
#include <QOpenGLTexture>

#include <QGLWidget>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <QtOpenGL>

#include <QPainter>

#include <QInputDialog>

#include <QLabel>
namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

    QString getPlayerName() const;

    int  getChips() const;

    int bet;

    void MakeBet1();




private slots:


    void on_BetButtonUL_clicked();



    void on_lcd1_overflow();

private:


    Ui::Settings *ui;

    QString playername;
    QPushButton betButton;

    QPainter painter;
    QLabel info_person;
};

#endif // SETTINGS_H

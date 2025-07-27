#pragma once

#ifndef ROULETTEGAME_H
#define ROULETTEGAME_H

#include "roulette.h"
#include <QMainWindow>
#include <QTimer>
#include <QCloseEvent>

class MainWindowlootgames;
class Roulette;
class Settings;

QT_BEGIN_NAMESPACE
namespace Ui {
class RouletteGame;
class MainWindowlootgames;
class Roulette;
class Settings;

}
QT_END_NAMESPACE

class RouletteGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit RouletteGame(QWidget *parent = nullptr);
    ~RouletteGame();

    void UPDATELCD();


private slots:
    void on_pushButton_clicked();



    void on_on_pushButton_2_clicked();

    void on_lcdNumber_overflow();

    void on_on_pushButton_3_clicked();

    void on_on_pushButton_4_clicked();

    void on_lcdNumber_2_overflow();

    void on_lcdNumber_3_overflow();

    void on_lcdNumber_5_overflow();

    void on_lcdNumber_4_overflow();

private:
    Ui::RouletteGame *ui;

    MainWindowlootgames *mainwindowlootgames = nullptr;

    Roulette *roulette;

    Settings *settings;
    QTimer *updateTimer;

};

#endif // ROULETTEGAME_H

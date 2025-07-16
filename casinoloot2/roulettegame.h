#pragma once

#ifndef ROULETTEGAME_H
#define ROULETTEGAME_H

#include "roulette.h"
#include <QMainWindow>

class MainWindowlootgames;
class Roulette;
class Settings;
QT_BEGIN_NAMESPACE
namespace Ui {
class RouletteGame;
class MainWindowlootgames;
class Roulette;

}
QT_END_NAMESPACE

class RouletteGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit RouletteGame(QWidget *parent = nullptr);
    ~RouletteGame();

private slots:
    void on_pushButton_clicked();



    void on_on_pushButton_2_clicked();

private:
    Ui::RouletteGame *ui;



    MainWindowlootgames *mainwindowlootgames = nullptr;

    Roulette *roulette;

    Settings *settings;

};

#endif // ROULETTEGAME_H

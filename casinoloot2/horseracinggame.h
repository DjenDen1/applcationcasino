#ifndef HORSERACINGGAME_H
#define HORSERACINGGAME_H

#include <QMainWindow>

class MainWindowlootgames;

namespace Ui {
class HorseRacingGame;
class MainWindowlootgames;
}

class HorseRacingGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit HorseRacingGame(QWidget *parent = nullptr);
    ~HorseRacingGame();

private slots:
    void on_pushButton_clicked();

private:
    Ui::HorseRacingGame *ui;
    MainWindowlootgames *mainwindowgames = nullptr;

};

#endif // HORSERACINGGAME_H

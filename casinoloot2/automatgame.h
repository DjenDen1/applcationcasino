#ifndef AUTOMATGAME_H
#define AUTOMATGAME_H

#include "settings.h"
#include <QMainWindow>

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>

#include <QTimer>



class Settings;
class MainWindowlootgames;
class SlotsMachine;
namespace Ui
{
class AutomatGame;
class MainWindowlootgames;
class Settings;
}

class AutomatGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit AutomatGame(QWidget *parent = nullptr);
    ~AutomatGame();




private slots:





    void on_pushButton_2_clicked();

    void on_lcdNumber_overflow();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:

    Ui::AutomatGame *ui;
    MainWindowlootgames *mainwindowlootgames;
    SlotsMachine *slotsmachine;
    Settings *settings;

};

#endif // AUTOMATGAME_H

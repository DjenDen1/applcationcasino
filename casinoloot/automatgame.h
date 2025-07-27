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

    void UPDATELCD();


private slots:





    void on_pushButton_2_clicked();

    void on_lcdNumber_overflow();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_lcdNumber_2_overflow();

    void on_label_linkActivated(const QString &link);

    void on_widget_3_customContextMenuRequested(const QPoint &pos);




    void on_pushButtonY_clicked();

    void on_lcdNumber_3_overflow();

    void on_lcdNumber_4_overflow();

    void on_lcdNumber_5_overflow();

private:

    Ui::AutomatGame *ui;
    MainWindowlootgames *mainwindowlootgames;
    SlotsMachine *slotsmachine;
    Settings *settings;

    QTimer *updateTimer;
/*
    void saveChipsBalance(int chip);
    int loadChipsBalance();
    void closeEvent(QCloseEvent *event);
*/

};

#endif // AUTOMATGAME_H

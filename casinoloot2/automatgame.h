#ifndef AUTOMATGAME_H
#define AUTOMATGAME_H

#include <QMainWindow>

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>

#include <QTimer>




class MainWindowlootgames;
class SlotsMachine;
namespace Ui
{
class AutomatGame;
class MainWindowlootgames;
}

class AutomatGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit AutomatGame(QWidget *parent = nullptr);
    ~AutomatGame();




private slots:





    void on_pushButton_2_clicked();

private:

    Ui::AutomatGame *ui;
    MainWindowlootgames *mainwindowlootgames;
    SlotsMachine *slotsmachine;

};

#endif // AUTOMATGAME_H

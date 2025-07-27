#ifndef THREECARDPOKERGAME_H
#define THREECARDPOKERGAME_H

#include <QMainWindow>

class MainWindowlootgames;
namespace Ui {
class ThreeCardPokerGame;
class MainWindowlootgames;
}

class ThreeCardPokerGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit ThreeCardPokerGame(QWidget *parent = nullptr);
    ~ThreeCardPokerGame();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ThreeCardPokerGame *ui;

    MainWindowlootgames *mainwindowgames;
};

#endif // THREECARDPOKERGAME_H

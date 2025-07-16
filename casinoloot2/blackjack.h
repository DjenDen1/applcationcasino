#ifndef BLACKJACK_H
#define BLACKJACK_H


#include <QMainWindow>
class MainWindowlootgames;

namespace Ui {
class BlackJack;
class MainWindowlootgames;
}

class BlackJack : public QMainWindow
{
    Q_OBJECT

public:
    explicit BlackJack(QWidget *parent = nullptr);
    ~BlackJack();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BlackJack *ui;
    MainWindowlootgames *mainwindowlootgames = nullptr;
};

#endif // BLACKJACK_H

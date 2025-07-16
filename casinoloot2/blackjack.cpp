#include "blackjack.h"
#include "ui_blackjack.h"

#include "mainwindowlootgames.h"

BlackJack::BlackJack(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BlackJack)
{
    ui->setupUi(this);
}

BlackJack::~BlackJack()
{
    delete ui;
}

void BlackJack::on_pushButton_clicked()
{
    if(!mainwindowlootgames)
    {
        this -> hide();
        mainwindowlootgames = new class MainWindowlootgames(this);
        mainwindowlootgames -> show();
    }
}


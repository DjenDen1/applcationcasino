#include "globals.h"

#include "settings.h"
#include "ui_settings.h"



Settings::Settings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Settings)
{
    ui->setupUi(this);
    setWindowTitle("Настройки");
    ui -> lcd1 -> display(currentBet);


}

Settings::~Settings()
{
    delete ui;
}

/*
int Settings::getChips() const {
    return ui -> spinBoxChips -> value();
}

QString Settings::getPlayerName() const
{
    return ui -> lineEditName -> text();
}

*/
void Settings::MakeBet1()
{
    bool ok;
    bet = QInputDialog::getInt(this, "Ставка", "Введите сумму ставки:", 100, 1, playerChips, 1, &ok);

    currentBet = bet;
}


void Settings::on_BetButtonUL_clicked()
{
    this -> MakeBet1();
    ui -> lcd1 -> display(currentBet);
}




void Settings::on_lcd1_overflow()
{


}



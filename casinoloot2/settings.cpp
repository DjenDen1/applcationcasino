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
    ui -> lcd2 -> display(playerChips);

    // /int bet = QInputDialog::getInt(this, "Ставка", "Введите сумму ставки:", 100, 1, playerChips, 1, &ok);
    // connect(betbutton, &QPushButton::clicked, this, &::Roulette::MakeBet);
    //betButton.setGeometry(800, 850, 150, 40);
    //connect(&Ui_Settings::BetButtonUL &QPushButton::clicked, this, &::Settings::MakeBet1);


    /*

    painter.drawText(10, 30, QString("Игрок: %1").arg(playername));
    painter.drawText(10, 60, QString("Фишки: %1").arg(playerChips));

    QPainter painter(this);


    painter.setRenderHint(QPainter::SmoothPixmapTransform,true);
    painter.setRenderHint(QPainter::Antialiasing,true);

    painter.resetTransform();
    painter.setPen(Qt::black);
    painter.setFont(QFont("Arial", 16, QFont::Bold));


    painter.drawText(10, 90, QString("Ставка: %1").arg(currentBet));

    */

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


void Settings::on_lcd2_overflow()
{

}


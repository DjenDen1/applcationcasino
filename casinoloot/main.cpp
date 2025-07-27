#include "mainwindow.h"
#include <QApplication>
#include "globals.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSettings setting("Casinoloot","MyCasinoGame");
    playerChips = setting.value("PlayerChips").toInt();

    amountLOSERATE_BLACKJACK = setting.value("amountLOSERATE_BLACKJACK").toInt();
    amountWINRATE_BLACKJACK = setting.value("amountWINRATE_BLACKJACK").toInt();

    amountroulettetimesLOSERATE = setting.value("amountroulettetimesLOSERATE").toInt();
    amountroulettetimesWINRATE = setting.value("amountroulettetimesWINRATE").toInt();

    winrate_automat = setting.value("winrate_automat").toInt();
    loserate_automat = setting.value("loserate_automat").toInt();

    WINRATEhorse = setting.value(" WINRATEhorse").toInt();
    LOSERATEhorse = setting.value(" LOSERATEhorse").toInt();

    MainWindow w;


    w.show();

    int result = a.exec();

    setting.setValue("PlayerChips", playerChips);

    setting.setValue("amountWINRATE_BLACKJACK", amountWINRATE_BLACKJACK);
    setting.setValue("amountLOSERATE_BLACKJACK", amountLOSERATE_BLACKJACK);

    setting.setValue("amountroulettetimesWINRATE",amountroulettetimesWINRATE);
    setting.setValue("amountroulettetimesLOSERATE", amountroulettetimesLOSERATE);

    setting.setValue("loserate_automat", loserate_automat);
    setting.setValue("winrate_automat",winrate_automat);

    setting.setValue(" WINRATEhorse",WINRATEhorse);
    setting.setValue(" LOSERATEhorse",LOSERATEhorse);
    return result;
}

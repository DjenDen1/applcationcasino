#include "slotsmachine.h"
#include "globals.h"
#include <QFont>
#include <cstdlib>
#include <ctime>

class Settings;

SlotsMachine::SlotsMachine(QWidget *parent)
    : QWidget(parent), spinCount(0) , settings(nullptr)
{
    srand(static_cast<unsigned>(time(nullptr)));

    symbols << "🍒" << "🔔" << "🍋" << "⭐️" << "💎" << "💊";

    reel1 = new QLabel("🍒", this);
    reel2 = new QLabel("🍋", this);
    reel3 = new QLabel("⭐️", this);



    QFont font;
    font.setPointSize(72);
    reel1->setFont(font);
    reel2->setFont(font);
    reel3->setFont(font);
    reel1->setAlignment(Qt::AlignCenter);
    reel2->setAlignment(Qt::AlignCenter);
    reel3->setAlignment(Qt::AlignCenter);

    spinButton = new QPushButton("Spin", this);
    connect(spinButton, &QPushButton::clicked, this, &SlotsMachine::spin); // переделать кнопку

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &SlotsMachine::updateReels);

    QHBoxLayout *reelsLayout = new QHBoxLayout;
    reelsLayout->addWidget(reel1);
    reelsLayout->addWidget(reel2);
    reelsLayout->addWidget(reel3);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addLayout(reelsLayout);
    mainLayout->addWidget(spinButton);
    setLayout(mainLayout);
}

void SlotsMachine::spin()
{

   if(playerChips > currentBet)
    {

        spinButton->setEnabled(false);
        spinCount = 0;
        timer->start(100);
        if (reel1 == reel2 and reel2 == reel3 and reel3 == reel1)
        {


                for(int delay = 0; delay < 1000000;delay++) continue;
                for(int delay1 = 0; delay1 < 1000000;delay1++) continue;


                playerChips += currentBet;
                QMessageBox::information(this , "Результат" , "Вы выиграли");

        }
        else
        {
            for(int delay2 = 0; delay2 < 1000000;delay2++) continue;
            for(int delay3 = 0; delay3 < 1000000;delay3++) continue;

            playerChips -= currentBet;
            QMessageBox::information(this , "Результат","Вы проиграли");
        }
   }
    else
    {

            QMessageBox::critical(this, "Игра" , "у вас нет фишек");

    }


}
void SlotsMachine::updateReels()
{
    reel1->setText(symbols[qrand() % symbols.size()]);
    reel2->setText(symbols[qrand() % symbols.size()]);
    reel3->setText(symbols[qrand() % symbols.size()]);

    spinCount++;

    if (spinCount >= 10) {
        timer->stop();
        spinButton->setEnabled(true);
    }
}

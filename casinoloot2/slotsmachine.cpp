#include "slotsmachine.h"
#include <QFont>
#include <cstdlib>
#include <ctime>

SlotsMachine::SlotsMachine(QWidget *parent)
    : QWidget(parent), spinCount(0)
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
    connect(spinButton, &QPushButton::clicked, this, &SlotsMachine::spin);

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
    spinButton->setEnabled(false);
    spinCount = 0;
    timer->start(100);
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

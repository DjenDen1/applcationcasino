#ifndef SLOTS_MACHINE_H
#define SLOTS_MACHINE_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QTimer>
#include <QStringList>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>

#include <QPaintEvent>
class Settings;
class SlotsMachine : public QWidget
{
    Q_OBJECT

public:
    explicit SlotsMachine(QWidget *parent = nullptr);
    void spin();
private slots:

    void updateReels();

private:
    QLabel *reel1;
    QLabel *reel2;
    QLabel *reel3;
    QPushButton *spinButton;
    QTimer *timer;
    int spinCount;

    QStringList symbols;

    Settings *settings;

};

#endif // SLOTS_MACHINE_H

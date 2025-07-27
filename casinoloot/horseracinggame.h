#ifndef HORSERACINGGAME_H
#define HORSERACINGGAME_H

#include <QMainWindow>

#include <QLabel>
#include <QTimer>
#include <QVector>

class MainWindowlootgames;
class Settings;

QT_BEGIN_NAMESPACE

namespace Ui
{
class HorseRacingGame;
class MainWindowlootgames;
class Settings;
}

QT_END_NAMESPACE

class HorseRacingGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit HorseRacingGame(QWidget *parent = nullptr);
    ~HorseRacingGame();


    void resetRace();
    void declareWinner(int index);

    void on_startButton_clicked();
    void updateRace();

    void UPDATELCD();


private slots:
    void on_pushButton_clicked();

    void on_statuslabel1_linkActivated(const QString &link);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_lcdNumber_overflow();

    void on_lcdNumber_2_overflow();

    void on_lcdNumber_4_overflow();

    void on_lcdNumber_3_overflow();

    void on_lcdNumber_5_overflow();

    void on_pushButton_8_clicked();

private:
    Ui::HorseRacingGame *ui;
    MainWindowlootgames *mainwindowgames = nullptr;

    QVector<QLabel*> horseLabels;
    QVector<int> positions;
    QTimer *raceTimer;
    int finishX;

    Settings *settings;

    QTimer *updateTimer;

};

#endif // HORSERACINGGAME_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mainwindowlootgames.h"
#include "settings.h"

#include <QMainWindow>

//classes

class MainWindowlootgames;
class Settings;
class RefeRence;


QT_BEGIN_NAMESPACE
namespace Ui {

class MainWindow;
/*
class MainWindowlootgames;
class Settings;
class RefeRence;
*/

}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    MainWindowlootgames *mainwindowlootgames = nullptr;
    Settings  *settings;
    RefeRence *reference;

};
#endif // MAINWINDOW_H

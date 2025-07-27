#include "reference.h"
#include "ui_reference.h"

#include <QLabel>

RefeRence::RefeRence(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RefeRence)
{
    ui->setupUi(this);
}

RefeRence::~RefeRence()
{
    delete ui;
}

void RefeRence::on_pushButton_clicked()
{
    QLabel *lab = new QLabel;

    lab->setText(" В самой первой версии программа была очень простой, способной только открывать другие окна и при открытии окна с выбором игры , проигрывалась музыка. То есть по сути имела только структуры будущего приложения");
    lab -> resize(1500,200);
    lab-> show();


}

void RefeRence::on_pushButton_2_clicked()
{

    QLabel *lab = new QLabel;

    lab->setText("Вторая версия программа является слегка усложненной первой, теперь в режиме рулетка можно крутить рулетку как в казино, правда у этого есть пока что проблемы,в виде плоховатой тектсуры");
    lab -> resize(1500,200);
    lab-> show();

}


void RefeRence::on_pushButton_3_clicked()
{

    QLabel *lab = new QLabel;

    lab->setText("Данная версия программа является финальной версий игры , теперь приложение имеет 4 игры (отсуствует трёхкарточный покер), реализовано сохранение данных после выхода из приложения , также в существующих играх показывается статистика");
    lab -> resize(1500,200);
    lab-> show();
}


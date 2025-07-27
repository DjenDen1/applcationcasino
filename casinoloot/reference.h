#ifndef REFERENCE_H
#define REFERENCE_H

#include <QMainWindow>

namespace Ui {
class RefeRence;
}

class RefeRence : public QMainWindow
{
    Q_OBJECT

public:
    explicit RefeRence(QWidget *parent = nullptr);
    ~RefeRence();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::RefeRence *ui;
};

#endif // REFERENCE_H

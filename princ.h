// CC-BY Edouard.Thiel@univ-amu.fr - 22/01/2019

#ifndef PRINC_H
#define PRINC_H

#include "ui_princ.h"


class Princ : public QMainWindow, private Ui::Princ
{
    Q_OBJECT

public:
    explicit Princ(QWidget *parent = 0);

public slots:
    void setSliderRadius(double radius);
    void Startmotor();
    void Stopmotor();


protected slots:
    void onSliderRadius(int value);
    void onSliderNear(int value);
    void onSliderFar(int value);
    void onSliderZ(int value);
    void onSliderAngle(int value);

private slots:
    void on_pushButton_clicked();
};

#endif // PRINC_H

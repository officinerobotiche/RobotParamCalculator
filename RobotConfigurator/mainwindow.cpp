#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <qmath.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double freq = 80e6;

    bool ok;
    double cpr = ui->lineEdit_enc_cpr->text().toDouble( &ok );

    if(!ok)
    {
        QMessageBox::warning( this, tr("Warning"), tr("Please insert a correct value for Encoder CPR"));
        return;
    }

    double ratio = ui->lineEdit_motor_ratio->text().toDouble( &ok);

    if(!ok)
    {
        QMessageBox::warning( this, tr("Warning"), tr("Please insert a correct value for Motor Reduction ratio"));
        return;
    }

    double k_ang = (2.0*M_PI)/(4.0*ratio*cpr);

    double d_rad = k_ang * 2.0;

    double k_vel = 1000.0*d_rad*freq;

    ui->lineEdit_k_ang_left->setText( tr("%1").arg(k_ang,12,'f') );
    ui->lineEdit_k_ang_right->setText( tr("%1").arg(k_ang,12,'f') );

    ui->lineEdit_k_vel_left->setText( tr("%1").arg(k_vel,12,'f') );
    ui->lineEdit_k_vel_right->setText( tr("%1").arg(k_vel,12,'f') );
}

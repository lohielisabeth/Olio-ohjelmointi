#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Count_clicked()
{
    QString num = QString::number(numero);
    ui->lineEdit->setText(num);
    numero ++;
}


void MainWindow::on_Reset_clicked()
{
    ui->lineEdit->clear();
    numero = 1;
}


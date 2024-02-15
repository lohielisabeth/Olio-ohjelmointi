#include "laskuri.h"
#include "ui_laskuri.h"

laskuri::laskuri(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::laskuri)
{
    ui->setupUi(this);
}

laskuri::~laskuri()
{
    delete ui;
}



void laskuri::AddNum(const QString &digit){
    if (nub == 0) {
        QString currentText = ui->Luku1->text();
        ui->Luku1->setText(currentText + digit);
    }
    else if (nub == 1){
        QString currentText = ui->Luku2->text();
        ui->Luku2->setText(currentText + digit);
       }
}

void laskuri::on_num1_clicked()
{
       qDebug("Num1 clicked");
       QString str = QStringLiteral("1");
       AddNum(str);
}


void laskuri::on_num2_clicked()
{
       qDebug("Num2 clicked");
       QString str = QStringLiteral("2");
       AddNum(str);
}


void laskuri::on_num3_clicked()
{
       qDebug("Num3 clicked");
       QString str = QStringLiteral("3");
       AddNum(str);
}


void laskuri::on_num4_clicked()
{
       qDebug("Num4 clicked");
       QString str = QStringLiteral("4");
       AddNum(str);
}


void laskuri::on_num5_clicked()
{
       qDebug("Num5 clicked");
       QString str = QStringLiteral("5");
       AddNum(str);
}


void laskuri::on_num6_clicked()
{
       qDebug("Num6 clicked");
       QString str = QStringLiteral("6");
       AddNum(str);
}


void laskuri::on_num7_clicked()
{
       qDebug("Num7 clicked");
       QString str = QStringLiteral("7");
       AddNum(str);
}


void laskuri::on_num8_clicked()
{
       qDebug("Num8 clicked");
       QString str = QStringLiteral("8");
       AddNum(str);
}


void laskuri::on_num9_clicked()
{
       qDebug("Num9 clicked");
       QString str = QStringLiteral("9");
       AddNum(str);
}


void laskuri::on_num0_clicked()
{
       qDebug("Num0 clicked");
       QString str = QStringLiteral("0");
       AddNum(str);
}


void laskuri::on_Clear_clicked()
{
    qDebug("Resetoitu");
    ui->Luku1->clear();
    ui->Luku2->clear();
    ui->Result->clear();
    num = 1;
    result = 1;
    nub = 0;
}


void laskuri::on_Enter_clicked()
{
    qDebug("Count clicked");

    num1 = ui->Luku1->text().toFloat();
    num2 = ui->Luku2->text().toFloat();
    float n1 = num1;
    float n2 = num2;

    switch(special){
        case 1:
        result= n1+n2;
        qDebug("%f", result);
        break;

        case 2:
        result= n1-n2;
        qDebug("%f", result);
        break;

        case 3:
        result= n1 * n2;
        qDebug("%f", result);
        break;

        case 4:
        result= n1 / n2;
        qDebug("%f", result);
        break;
    }
        QString res = QString::number(result);
    ui->Result->setText(res);

}


void laskuri::on_plus_clicked()
{
    qDebug("Plus clicked");
    special = 1;
    nub = 1;
}


void laskuri::on_minus_clicked()
{
    qDebug("Minus clicked");
    special = 2;
    nub = 1;
}


void laskuri::on_multiply_clicked()
{
    qDebug("Multiply clicked");
    special = 3;
    nub = 1;
}


void laskuri::on_jako_clicked()
{
    qDebug("Jako clicked");
    special = 4;
    nub = 1;
}


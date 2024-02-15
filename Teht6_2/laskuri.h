#ifndef LASKURI_H
#define LASKURI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class laskuri; }
QT_END_NAMESPACE

class laskuri : public QMainWindow
{
    Q_OBJECT

public:
    laskuri(QWidget *parent = nullptr);
    ~laskuri();
    int num = 0;
    float result = 1;
    float num1 = 0;
    float num2 = 0;
    int special;
    int nub = 0;



private slots:
    void AddNum(const QString &digit);

    void on_num1_clicked();

    void on_num2_clicked();

    void on_num3_clicked();

    void on_num4_clicked();

    void on_num5_clicked();

    void on_num6_clicked();

    void on_num7_clicked();

    void on_num8_clicked();

    void on_num9_clicked();

    void on_num0_clicked();

    void on_Clear_clicked();

    void on_Enter_clicked();

    void on_plus_clicked();

    void on_minus_clicked();

    void on_multiply_clicked();

    void on_jako_clicked();

private:
    Ui::laskuri *ui;
};
#endif // LASKURI_H

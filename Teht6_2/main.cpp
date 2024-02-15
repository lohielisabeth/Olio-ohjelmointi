#include "laskuri.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    laskuri w;
    w.show();
    return a.exec();
}

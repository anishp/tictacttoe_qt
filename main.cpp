#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // Enter your code here

    char b[9] = {'a', 'a', 'a',
                 'a', 'a', 'a',
                 'a', 'a', 'x'};
    // use the drawBoard method of MainWindow w to draw the board
    // b is an array of size 9 containing characters to be displayed on the board;
    w.drawBoard(b);

    return a.exec();
}

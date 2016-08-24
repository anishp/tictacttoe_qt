#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    char board[9];
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void drawBoard(char* b = NULL);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

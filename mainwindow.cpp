#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    for(int i=0; i<9; i++)
        this->board[i] = '1' + i;
    drawBoard();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::drawBoard(char* b) {

    if(b != NULL)
        memcpy(this->board, b, sizeof(char)*9);

    ui->label_1->setText(QString(this->board[0]));
    ui->label_2->setText(QString(this->board[1]));
    ui->label_3->setText(QString(this->board[2]));
    ui->label_4->setText(QString(this->board[3]));
    ui->label_5->setText(QString(this->board[4]));
    ui->label_6->setText(QString(this->board[5]));
    ui->label_7->setText(QString(this->board[6]));
    ui->label_8->setText(QString(this->board[7]));
    ui->label_9->setText(QString(this->board[8]));
}

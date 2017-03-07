#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    label =new QLabel(this);
    label->setText("love you so much");
    label->move(100,100);
    label->setStyleSheet("font-size:20px;color:red;font-weight:bold;font-style:italic");
}

MainWindow::~MainWindow()
{
    delete ui;
}

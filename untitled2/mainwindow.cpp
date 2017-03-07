#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QMouseEvent>//引用鼠标头文件
#include <QPushButton>//引用按钮头文件

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QLabel *label=new QLabel(this);
    label->setText("i love huyiya");
    label->setGeometry(QRect(50,50,200,50));
    //设置窗口标题
    this->setWindowTitle("lover");
    //窗口最大300*300
    this->setMaximumSize(300,300);
    //窗口最小300*300
    this->setMinimumSize(300,300);
    this->move(100,100);
    //背景颜色
    this->setStyleSheet("background:red");


}

MainWindow::~MainWindow()
{
    delete ui;
}

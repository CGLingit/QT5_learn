#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <Qlabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //创建一个QLabel控件
    QLabel *label=new QLabel(this);
    //QLabel显示文字内容
    label->setText("HELLO WORLD");
    //显示位置
    label->setGeometry(QRect(50,50,200,25));
}

MainWindow::~MainWindow()
{
    delete ui;
}

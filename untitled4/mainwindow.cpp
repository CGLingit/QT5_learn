#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    button =new QPushButton(this);//实例QPushButton控件
    //按钮显示的位置
    button->setGeometry(QRect(50,50,100,25));
    //按钮值
    button->setText("按钮");

    //点击事件
    connect(button,SIGNAL(clicked()),this,SLOT(showMainwindow2()));
}
//调用方法
void MainWindow::showMainwindow2()
{
    wind2.show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

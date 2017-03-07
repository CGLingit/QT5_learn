#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //实例QSpainBox
    spinBox=new QSpinBox(this);
    spinBox->setGeometry(QRect(50,50,100,25));
    //值的范围
    spinBox->setRange(0,200);
    //初始值
    spinBox->setValue(10);
    //后缀
    spinBox->setSuffix("元");
    //前缀
    spinBox->setPrefix("$");

    timeEdit=new QTimeEdit(this);
    timeEdit->setGeometry(QRect(100,100,125,25));
    //获取系统时间
    QDateTime sysTime=QDateTime::currentDateTime();
    //获取时分秒以“ ：”号拆分赋给list数组
    QStringList list=sysTime.toString("hh:mm:ss").split(':');
    //将时分秒绑定控件timeEdit
    timeEdit->setTime(QTime(list[0],list[1],list[2].toInt()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

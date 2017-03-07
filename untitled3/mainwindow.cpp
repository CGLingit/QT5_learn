#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("移动无边窗体");
    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏,窗体就没有关闭按钮
    //自己添加一个按钮实现关闭功能
    btClose=new QPushButton(this);
    btClose->setText("关闭");
    //按扭点击事件
    connect(btClose,SIGNAL(clicked()),this,SLOT(close()));
}
//获得鼠标点定位窗体位置
void MainWindow::mousePressEvent(QMouseEvent *e)
{
    last=e->globalPos();
}
void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    int dx=e->globalX()-last.x();
    int dy=e->globalY()-last.y();

    last=e->globalPos();
    move(x()+dx,y()+dy);
}

void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    int dx=e->globalX()-last.x();
    int dy=e->globalY()-last.y();
    move(x()+dx,y()+dy);
}

MainWindow::~MainWindow()
{
    delete ui;
}

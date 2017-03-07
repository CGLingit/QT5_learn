#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    fontComboBox=new QFontComboBox(this);
    pushButon=new QPushButton(this);
    label =new QLabel(this);

    label->setGeometry(QRect(50,150,300,25));
    pushButon->setText("按钮");
    pushButon->move(180,50);
    //事件
    connect(pushButon,SIGNAL(clicked()),this,SLOT(txtButton()));
}

void MainWindow::txtButton(){
    label->setText("选择字体："+fontComboBox->currentText());
}
MainWindow::~MainWindow()
{
    delete ui;
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <mainwindow2.h>//引用mainwindow2类

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
//实例按钮
private:
    QPushButton *button;
    MainWindow wind2;
//实例方法
private slots:
    void showMainwindow2();
};

#endif // MAINWINDOW_H

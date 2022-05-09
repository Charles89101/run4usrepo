#include <windows.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dwplay.h"
#include "dwmonitor.h"
#include "dwhttp.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_connectServer_clicked()
{
    dwPlay play;
    QString fileList[2];
    fileList[0] = "C:/_Develop/other/dw/test.jpg";
    fileList[1] = "C:/_Develop/other/dw/test.jpg";
    play.setFileList(fileList, 2);
    play.startPlay();
}


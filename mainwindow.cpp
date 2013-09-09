#include "mainwindow.h"
#include "ui_mainwindow.h"
//ohfjds
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    player->setMedia(QUrl::fromLocalFile("/home/hikari/Desktop/zuomian/Blue Eyes.mp3"));
    player->setVolume(50);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    player->play();
}

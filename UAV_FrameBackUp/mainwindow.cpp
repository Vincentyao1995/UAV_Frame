#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHBoxLayout>
#include <QtGui>
#include <QtCore>
#include <QFileDialog>
#include <QtWidgets/QMessageBox>
//2017.1.15 12:00 视频还不能控制格式，现在只能打开avi格式的文件；而且没有其他提示。
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    CommonHelper::setStyle("E:/College/Code/QT/workspace/UAV_FrameBackUp/test.qss");
    ui->setupUi(this);
    ui->listWidget->setStyleSheet("color: white");
    showWeb(ui->page_2);
	playButton = false;

    //create a new timer
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(dataUpdate() ));

    // set the initial count time to zero
    countTime = -5;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dataUpdate()
{

    QString textStream = "None"; // North, South, West, East
    QString textTrend  = "None";// Scattering
    QString textDanger = "None"; //High Mid Low
    QString textDensity = "None";


    if  (countTime < 2)
    {
        textStream = "West";
        textTrend = "None";
        textDanger = "Low";
        textDensity = "12/Field";
    }
    if (countTime >= 2 && countTime < 10)
    {
        textStream = "East";
        textTrend = "Assembling";
        textDanger = "Mid";
        textDensity = "12/Field";
    }
    if (countTime == 10)
        QMessageBox::warning(this, tr("Signal Attention"), tr("Public Assembling Attention! Area: Friendship Square"));

    if (countTime >= 10 && countTime < 12)
    {
        textStream = "North";
        textTrend = "None";
        textDanger = "Mid";
        textDensity = "13/Field";
    }
    if (countTime >= 12 && countTime < 28)
    {
        textStream = "None";
        textTrend = "None";
        textDanger = "Mid";
        textDensity = "5/Field";
    }
    if (countTime >= 28 && countTime < 32)
    {
        textStream = "West";
        textTrend = "Scattering";
        textDanger = "Low";
        textDensity = "14/Field";
    }
    ui->label_stream->setText(textStream);
    ui->label_trend->setText(textTrend);
    ui->label_danger->setText(textDanger);
    ui->lablel_density->setText(textDensity);

    countTime += 1;

}

void MainWindow::showWeb(QWebEngineView* view)
{
    QString strMapPath = "E:/College/Code/QT/workspace/UAV_FrameBackUp/debug/mapAnother.html";
    view->setUrl(QUrl(strMapPath));
	view->resize(1024, 750);
	view->show();
}
void MainWindow::showVideo(QVideoWidget *videoWidget)
{
	player = new QMediaPlayer;
    //QString videoPath = "file:///F:/QQDownload/AshesOfTime.avi";
    player->setMedia(QUrl::fromLocalFile(videoPath));
	//bool videoAvailable=false;
	player->setVideoOutput(videoWidget);
	videoWidget->show();
	player->play();
	playButton = true;
}
void MainWindow::on_pushButton_clicked()
{
    videoPath = QFileDialog::getOpenFileName();
	//judgeVideoType(videoPath);
	showVideo(ui->page);
}

void MainWindow::on_pushButtonPause_clicked()
{
	if (playButton != false)
		player->pause();
	else
        QMessageBox::warning(this, tr("Video loading error"), tr("video hasn't been loaded"));
	
}

void MainWindow::on_pushButtonPlay_clicked()
{
	if (playButton != false)
		player->play();
	else
        QMessageBox::warning(this, tr("Video loading error"), tr("video hasn't been loaded"));
	
}

void MainWindow::on_pushButtonStop_clicked()
{
	if (playButton != false)
		player->stop();
	else
        QMessageBox::warning(this, tr("Video loading error"), tr("video hasn't been loaded"));
}
void MainWindow::coordinate()
{

}


void MainWindow::on_pushButtonAutoPlay_clicked()
{
    timer->start(1000);
    //create and open a new dialog here, and play video by yourself.
    autoDlg.show();
}

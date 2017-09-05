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
    ui->setupUi(this);
    showWeb(ui->page_2);
	playButton = false;

    //create a new timer
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(dataUpdate() ));
    timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dataUpdate()
{
    QDateTime time = QDateTime::currentDateTime();
    ui->label_stream->setText("0.3");
    ui->label_trend->setText("0.3");
    ui->label_danger->setText("0.3");
    ui->lablel_density->setText("0.3");
}

void MainWindow::showWeb(QWebEngineView* view)
{
	QString strTest = "http://baidu.com";
    //QString strMapPath("file:///E:/College/Code/QT/workspace/UAV_Frame/debug/map.html");
	QString  strMapPath = "file:///";
	strMapPath += QCoreApplication::applicationDirPath();
    strMapPath += "/map.html";
    strMapPath = "file:///E:/College/Code/QT/workspace/UAV_FrameBackUp/debug/map.html";
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
    //create and open a new dialog here, and play video by yourself.
    autoDlg.show();
}

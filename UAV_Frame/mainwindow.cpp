#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHBoxLayout>
#include <QtGui>
#include <QFileDialog>
#include <QtWidgets/QMessageBox>
#include "mclmcr.h"
#include "myFuncdll.h"
//2017.1.15 12:00 ��Ƶ�����ܿ��Ƹ�ʽ������ֻ�ܴ�avi��ʽ���ļ�������û��������ʾ��
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    showWeb(ui->page_2);
	playButton = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::showWeb(QWebEngineView* view)
{
	QString strTest = "http://baidu.com";
    //QString strMapPath("file:///E:/College/Code/QT/workspace/UAV_Frame/debug/map.html");
	QString  strMapPath = "file:///";
	strMapPath += QCoreApplication::applicationDirPath();
    strMapPath += "/map.html";
    strMapPath = "file:///E:/College/Code/QT/workspace/UAV_Frame/debug/map.html";
    view->setUrl(QUrl(strMapPath));
	view->resize(1024, 750);
	view->show();
}
void MainWindow::showVideo(QVideoWidget *videoWidget)
{
	player = new QMediaPlayer;
	//QString videoPath = "F:/QQDownload/wire/The.Wire.S01E01.The.Target.AC3.DVDRip.XviD-MEDiEVAL.avi";
	player->setMedia(QUrl::fromLocalFile(videoPath));
	//bool videoAvailable=false;
	connect(player,
		SLOT(player->error()), 
		this, 
		SIGNAL(QMessageBox::warning(this, tr("video error"), tr("%1").arg(player->error()))));
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



void MainWindow::on_pushButtonTestDll_clicked()
{
    //QLibrary lib("testdll.dll");
    //QMessageBox msg;
	if (!myFuncdllInitialize())
		QMessageBox::information(NULL, "NO", "DLL is not loaded!");

	else if (myFuncdllInitialize())
		QMessageBox::information(NULL, "OK", "DLL load is OK!");

	if (mlfMyFunc(1, NULL))
		QMessageBox::information(NULL, "plot!", "DLL is not loaded!");
    
}

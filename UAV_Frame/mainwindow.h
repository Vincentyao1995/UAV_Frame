#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWebEngineWidgets/QWebEngineHistory>
#include <QtWebEngineWidgets/QWebEngineHistoryItem>
#include <QtWebEngineWidgets/QWebEnginePage>
#include <QtWebEngineWidgets/QWebEngineView>
#include "Dialog.h"
#include <QDialog>
#include <QListWidget>
#include <QLabel>
#include <QStackedWidget>
#include <QHBoxLayout>
#include "ui_mainwindow.h"
#include <QMediaPlayer>     // ʹ��QMediaPlayer��
#include <QMediaPlaylist>   // ʹ��QMediaPlaylist��
#include <QVideoWidget>     // ʹ��QVideoWidget��
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void showWeb(QWebEngineView*);
    void showVideo(QVideoWidget *);
	QString videoPath;
	void judgeVideoType(QString);
	void coordinate();
private slots:
    void on_pushButton_clicked();
    void on_pushButtonPause_clicked();
    void on_pushButtonPlay_clicked();

    void on_pushButtonStop_clicked();

    void on_pushButtonTestDll_clicked();

private:
    Ui::MainWindow *ui;
	bool playButton;
	QMediaPlayer *player;
	
};

#endif // MAINWINDOW_H

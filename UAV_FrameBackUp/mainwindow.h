#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFile>
#include <QApplication>
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
#include <QMediaPlayer>     // 使用QMediaPlayer类
#include <QMediaPlaylist>   // 使用QMediaPlaylist类
#include <QVideoWidget>     // 使用QVideoWidget类
#include "autovideodlg.h"
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

public slots:
    void dataUpdate();
private slots:
    void on_pushButton_clicked();
    void on_pushButtonPause_clicked();
    void on_pushButtonPlay_clicked();
    void on_pushButtonStop_clicked();
    void on_pushButtonAutoPlay_clicked();

private:
    Ui::MainWindow *ui;
	bool playButton;
	QMediaPlayer *player;
    AutoVideoDlg autoDlg;
    int countTime;
    QTimer *timer;


};

class CommonHelper
{
public:
    static void setStyle(const QString &style) {
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }
};



#endif // MAINWINDOW_H

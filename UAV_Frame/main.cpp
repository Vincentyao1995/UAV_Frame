#include "mainwindow.h"
#include <QApplication>
#include <QtWebEngineWidgets/QWebEngineView>
#include "Dialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
	w.setWindowTitle("UAV_Frame");
    w.show();
	Dialog mDialog;
	mDialog.resize(1024, 768);
    return a.exec();
}
void show()
{
	QWebEngineView view;
    //QString strMapPath("file:///E:/College/Code/QT/workspace/UAV_Frame/debug/map.html");
	QString  strMapPath = "file:///";
	QString strTest = "http://baidu.com";
	strMapPath += QCoreApplication::applicationDirPath();
	strMapPath += "/map.html";
    view.setUrl(QUrl(strTest));
	view.resize(1024, 750);
	view.show();
}

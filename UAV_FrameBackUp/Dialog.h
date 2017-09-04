#pragma once
#include <QDialog>
#include <QListWidget>
#include <QLabel>
#include <QStackedWidget>
#include <QHBoxLayout>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QApplication>

class Dialog :
	public QDialog
{
	Q_OBJECT
public:
	Dialog(QWidget* parent=0);
	~Dialog();
private :
	QListWidget *leftList;
	QStackedWidget *stack;
	QLabel *label1;
	QLabel *label2;
	QLabel *label3;
	QLabel *label4;
	void showWeb();
};


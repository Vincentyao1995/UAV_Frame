#include "Dialog.h"
#include <QHBoxLayout>

Dialog::Dialog(QWidget *parent)
	:QDialog(parent)
{
	//对话框名称
    setWindowTitle(tr("UAV Based Safety Monitoring System Version 1.0 WHU - 星域浩渺团队"));
	//设置列表框，即左边的选项框
	leftList = new QListWidget(this);
	leftList->insertItem(0, tr("显示监控视频"));
	leftList->insertItem(1, tr("地图模式(主)"));
	leftList->insertItem(2, tr("软件功能介绍"));
	leftList->insertItem(3, tr("团队介绍"));



	//右侧工具定义
	


	//设置堆栈窗体内容（即右侧的切换窗体）
	label1 = new QLabel(tr("WindowTest1"));
	label2 = new QLabel(tr("WindowTest2"));
	label3 = new QLabel(tr("WindowTest3"));
	label4 = new QLabel(tr("WindowTest4"));

	stack = new QStackedWidget(this);
	stack->addWidget(label1);//现在还没有实现让view在这个stack中显示出来。
	stack->addWidget(label2);
	stack->addWidget(label3);
	stack->addWidget(label4);
	
	//设置右侧布局
	//*****
	
	//设置主窗口布局
	QHBoxLayout *mainLayout = new QHBoxLayout(this);
	mainLayout->setMargin(5);
	mainLayout->setSpacing(5);
	mainLayout->addWidget(stack, 0, Qt::AlignHCenter);
	mainLayout->setStretchFactor(leftList, 1);
	mainLayout->setStretchFactor(stack, 3);
    connect(leftList, SIGNAL(currentRowChanged(int)), stack, SLOT(setCurrentIndex(int)));


}


Dialog::~Dialog()
{
}
void Dialog::showWeb()
{
	QWebEngineView view;
	QString strTest = "http://baidu.com";
	//QString strMapPath("file:///E:/College/Code/QT/workspace/UAV_Frame/debug/map.html");
	QString  strMapPath = "file:///";
	strMapPath += QCoreApplication::applicationDirPath();
	strMapPath += "/map.html";
	view.setUrl(QUrl(strMapPath));
	view.resize(1024, 750);
	view.show();
}

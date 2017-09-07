#include "Dialog.h"
#include <QHBoxLayout>

Dialog::Dialog(QWidget *parent)
	:QDialog(parent)
{
	//�Ի�������
    setWindowTitle(tr("UAV Based Safety Monitoring System Version 1.0 WHU - ��������Ŷ�"));
	//�����б�򣬼���ߵ�ѡ���
	leftList = new QListWidget(this);
	leftList->insertItem(0, tr("��ʾ�����Ƶ"));
	leftList->insertItem(1, tr("��ͼģʽ(��)"));
	leftList->insertItem(2, tr("������ܽ���"));
	leftList->insertItem(3, tr("�Ŷӽ���"));



	//�Ҳ๤�߶���
	


	//���ö�ջ�������ݣ����Ҳ���л����壩
	label1 = new QLabel(tr("WindowTest1"));
	label2 = new QLabel(tr("WindowTest2"));
	label3 = new QLabel(tr("WindowTest3"));
	label4 = new QLabel(tr("WindowTest4"));

	stack = new QStackedWidget(this);
	stack->addWidget(label1);//���ڻ�û��ʵ����view�����stack����ʾ������
	stack->addWidget(label2);
	stack->addWidget(label3);
	stack->addWidget(label4);
	
	//�����Ҳ಼��
	//*****
	
	//���������ڲ���
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

#include "autovideodlg.h"
#include "ui_autovideodlg.h"
#include <QtWidgets/QMessageBox>
#include <QtGui>
#include <QFileDialog>

AutoVideoDlg::AutoVideoDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AutoVideoDlg)
{
    ui->setupUi(this);
    playButton = false;
    showVideo(ui->video);
}

AutoVideoDlg::~AutoVideoDlg()
{
    delete ui;
}

void AutoVideoDlg::showVideo(QVideoWidget *videoWidget)
{
    player = new QMediaPlayer;
    videoPath = "F:/QQDownload/AshesOfTime.avi";
    //videoPath = QFileDialog::getOpenFileName();
    player->setMedia(QUrl::fromLocalFile(videoPath));
    player->setVideoOutput(videoWidget);
    videoWidget->show();
    player->play();
    playButton = true;
}




void AutoVideoDlg::on_pushButton_play_clicked()
{

    if (playButton != false)
        player->play();
    else
        QMessageBox::warning(this, tr("Video loading error"), tr("video hasn't been loaded"));
}

void AutoVideoDlg::on_pushButton_pause_clicked()
{
    if (playButton != false)
        player->pause();
    else
        QMessageBox::warning(this, tr("Video loading error"), tr("video hasn't been loaded"));
}

void AutoVideoDlg::on_pushButton_stop_clicked()
{
    if (playButton != false)
        player->stop();
    else
        QMessageBox::warning(this, tr("Video loading error"), tr("video hasn't been loaded"));
}

void AutoVideoDlg::on_pushButton_close_clicked()
{
    this->close();
}

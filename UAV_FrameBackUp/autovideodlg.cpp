#include "autovideodlg.h"
#include "ui_autovideodlg.h"

AutoVideoDlg::AutoVideoDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AutoVideoDlg)
{
    ui->setupUi(this);
    playButton = false;
    showVideo(ui->videoWidget);
}

AutoVideoDlg::~AutoVideoDlg()
{
    delete ui;
}

void AutoVideoDlg::showVideo(QVideoWidget *videoWidget)
{
    player = new QMediaPlayer;
    QString videoPath = "F:\QQDownload\game of throne s704.mp4";
    player->setMedia(QUrl::fromLocalFile(videoPath));

    connect(player,
        SLOT(player->error()),
        this,
        SIGNAL(QMessageBox::warning(this, tr("video error"), tr("%1").arg(player->error()))));
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

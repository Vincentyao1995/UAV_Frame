#ifndef AUTOVIDEODLG_H
#define AUTOVIDEODLG_H

#include <QDialog>
#include <QMediaPlayer>     // 使用QMediaPlayer类
#include <QVideoWidget>
#include <QMessageBox>
namespace Ui {
class AutoVideoDlg;
}

class AutoVideoDlg : public QDialog
{
    Q_OBJECT

public:
    explicit AutoVideoDlg(QWidget *parent = 0);
    ~AutoVideoDlg();

    void showVideo(QVideoWidget *);
    QString videoPath;

private slots:

    void on_pushButton_play_clicked();

    void on_pushButton_pause_clicked();

    void on_pushButton_stop_clicked();

    void on_pushButton_close_clicked();

private:
    Ui::AutoVideoDlg *ui;
    bool playButton;
    QMediaPlayer *player;
};

#endif // AUTOVIDEODLG_H

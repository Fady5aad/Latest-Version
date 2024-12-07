#ifndef STARTGAME_H
#define STARTGAME_H
#include "levelmanager.h"
#include <QDialog>

namespace Ui {
class StartGame;
}

class StartGame : public QDialog
{
    Q_OBJECT

public:
    explicit StartGame(QWidget *parent = nullptr);
    ~StartGame();

private slots:
    void on_pushButtonLev1_clicked();

    void on_pushButtonLev2_clicked();

    void on_pushButtonLev3_clicked();

    void on_pushButtonLev4_clicked();

    void on_pushButtonLev5_clicked();

private:
    Ui::StartGame *ui;
    LevelManager Manager;
};

#endif // STARTGAME_H

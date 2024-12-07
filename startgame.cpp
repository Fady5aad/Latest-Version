#include "startgame.h"
#include "ui_startgame.h"

StartGame::StartGame(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StartGame)
{
    ui->setupUi(this);
}

StartGame::~StartGame()
{
    delete ui;
}

void StartGame::on_pushButtonLev1_clicked()
{
    LevelManager *manager = new LevelManager();
    manager->startLevel1();
    manager->show();  // Display the LevelManager window
    this->close();    // Close the current StartGame window
}

void StartGame::on_pushButtonLev2_clicked()
{
    LevelManager *manager = new LevelManager();
    manager->startLevel2();
    manager->show();  // Display the LevelManager window

    this->close();
}


void StartGame::on_pushButtonLev3_clicked()
{
    LevelManager *manager = new LevelManager();
    manager->startLevel3();
    manager->show();  // Display the LevelManager window

    this->close();
}


void StartGame::on_pushButtonLev4_clicked()
{
    LevelManager *manager = new LevelManager();
    manager->startLevel4();
    manager->show();  // Display the LevelManager window

    this->close();
}


void StartGame::on_pushButtonLev5_clicked()
{
    LevelManager *manager = new LevelManager();
    manager->startLevel5();
    manager->show();  // Display the LevelManager window

    this->close();
}


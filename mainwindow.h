#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "LevelManager.h"  // Include LevelManager for managing levels
#include "startgame.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    LevelManager *levelManager;  // LevelManager to handle levels
};

#endif // MAINWINDOW_H

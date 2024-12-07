#include <QApplication>
#include "mainwindow.h"
#include "startgame.h"

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);    // Initialize the Qt application
    StartGame sg;
    sg.show();                         // Show the main window

    return app.exec();                // Start the event loop
}

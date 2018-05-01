#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("C:/Users/Usuario/Documents/QTProjects/untitled/images/icon"));

    //Add Splash Screen
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap("C:/Users/Usuario/Documents/QTProjects/untitled/images/mariosplash.png"));
    splash->show();

    MainWindow mainWin;
 //   mainWin.setSize();

    QTimer::singleShot(4000,splash,SLOT(close()));
    QTimer::singleShot(4000,&mainWin,SLOT(show()));

  //  w.show();

    return a.exec();
}

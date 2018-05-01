#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QDesktopWidget>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setSize();

private:
    Ui::MainWindow *ui;

    QRect screenGeometry = QApplication::desktop()->screenGeometry();
};

#endif // MAINWINDOW_H

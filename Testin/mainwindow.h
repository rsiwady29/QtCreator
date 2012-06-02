#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFile>
#include <QString>
#include <QFileDialog>
#include <QTextStream>

#include <fstream>
#include <string>

#include <map>

using namespace std;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    map<QChar, int> mapaLetras;

private:
    Ui::MainWindow *ui;

private slots:
    void on_btnCargar_clicked();
};

#endif // MAINWINDOW_H

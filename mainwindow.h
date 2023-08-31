#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "professor.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_executar_clicked();

private:
    Ui::MainWindow *ui;
    Professor *professor;
    int tamanho_vetor = 0;

};
#endif // MAINWINDOW_H

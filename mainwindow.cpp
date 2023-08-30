#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(5);
    QStringList cabecalho = {"Matricula", "Nome", "Departamento", "Titulacao", "Tipo de contato"};
    ui->tableWidget->setHorizontalHeaderLabels(cabecalho);
    ui->tableWidget->setHorizontalHeaderLabels(cabecalho);
    ui->tableWidget->setColumnWidth(0, 150); // Matricula
    ui->tableWidget->setColumnWidth(1, 250); // Nome
    ui->tableWidget->setColumnWidth(2, 100); // Departamento
    ui->tableWidget->setColumnWidth(3, 100);   // Titulacao
    ui->tableWidget->setColumnWidth(4, 150); // Tipo de contato
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MainWindow::~MainWindow()
{
    delete ui;
}


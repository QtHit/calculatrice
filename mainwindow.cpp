#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_1,SIGNAL(envoiChiffre(int)),this,SLOT(modifLineEdit(int)));
    connect(ui->pushButton_2,SIGNAL(envoiChiffre(int)),this,SLOT(modifLineEdit(int)));
    connect(ui->pushButton_3,SIGNAL(envoiChiffre(int)),this,SLOT(modifLineEdit(int)));
    connect(ui->pushButton_4,SIGNAL(envoiChiffre(int)),this,SLOT(modifLineEdit(int)));
    connect(ui->pushButton_5,SIGNAL(envoiChiffre(int)),this,SLOT(modifLineEdit(int)));
    connect(ui->pushButton_6,SIGNAL(envoiChiffre(int)),this,SLOT(modifLineEdit(int)));
    connect(ui->pushButton_7,SIGNAL(envoiChiffre(int)),this,SLOT(modifLineEdit(int)));
    connect(ui->pushButton_8,SIGNAL(envoiChiffre(int)),this,SLOT(modifLineEdit(int)));
    connect(ui->pushButton_9,SIGNAL(envoiChiffre(int)),this,SLOT(modifLineEdit(int)));
    connect(ui->pushButton_0,SIGNAL(envoiChiffre(int)),this,SLOT(modifLineEdit(int)));

    connect(ui->pushButton_plus,SIGNAL(clicked(bool)),this,SLOT(addition()));
    connect(ui->pushButton_moins,SIGNAL(clicked(bool)),this,SLOT(soustraction()));
    connect(ui->pushButton_multiplier,SIGNAL(clicked(bool)),this,SLOT(multiplication()));
    connect(ui->pushButton_diviser,SIGNAL(clicked(bool)),this,SLOT(division()));

    connect(ui->pushButton_C,SIGNAL(clicked(bool)),this,SLOT(efface()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::modifLineEdit(int i)
{
    ui->lineEdit->setText(ui->lineEdit->text().append(QString::number(i)));
}

void MainWindow::addition()
{
    ui->label_temp->setText(  QString::number( ui->label_temp->text().toInt() + ui->lineEdit->text().toInt()  )  );
    ui->lineEdit->clear();
}

void MainWindow::soustraction()
{
    ui->label_temp->setText(  QString::number( ui->label_temp->text().toInt() - ui->lineEdit->text().toInt()  )  );
    ui->lineEdit->clear();
}

void MainWindow::multiplication()
{
    ui->label_temp->setText(  QString::number( ui->label_temp->text().toInt() * ui->lineEdit->text().toInt()  )  );
    ui->lineEdit->clear();
}

void MainWindow::division()
{
    ui->label_temp->setText(  QString::number( ui->label_temp->text().toInt() / ui->lineEdit->text().toInt()  )  );
    ui->lineEdit->clear();
}

void MainWindow::efface()
{
    ui->lineEdit->clear();
    ui->label_temp->setText("0");
}


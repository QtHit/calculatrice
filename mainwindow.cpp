#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cas=0;

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

    connect(ui->pushButton_plus,SIGNAL(clicked(bool)),this,SLOT(add()));
    connect(ui->pushButton_moins,SIGNAL(clicked(bool)),this,SLOT(sou()));
    connect(ui->pushButton_multiplier,SIGNAL(clicked(bool)),this,SLOT(mul()));
    connect(ui->pushButton_diviser,SIGNAL(clicked(bool)),this,SLOT(div()));

    connect(ui->pushButton_egale,SIGNAL(clicked(bool)),this,SLOT(ega()));

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

void MainWindow::add()
{
    action();
    cas=1;
}

void MainWindow::sou()
{
    action();
    cas=2;
}

void MainWindow::mul()
{
    action();
    cas=3;
}

void MainWindow::div()
{
    action();
    cas=4;
}

void MainWindow::ega()
{
    action();
    ui->label_resultat->setText(ui->label_temp->text());
    List<<ui->label_temp->text();
    QCompleter *completer = new QCompleter(List, this);
//    QCompleter *completer = new QCompleter(List);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit->setCompleter(completer);
    ui->label_temp->clear();
}

void MainWindow::action()
{
   if (cas==0)
   {
       ui->label_temp->setText(  QString::number( ui->label_temp->text().toInt() + ui->lineEdit->text().toInt()  )  );
       ui->lineEdit->clear();
   }
   if (cas==1)
       addition();
   if (cas==2)
       soustraction();
   if (cas==3)
       multiplication();
   if (cas==4)
       division();
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
    ui->label_temp->clear();
    ui->label_resultat->clear();
}


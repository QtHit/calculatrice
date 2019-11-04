#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCompleter>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QStringList List;

private:
    Ui::MainWindow *ui;
    int cas;
    void addition();
    void soustraction();
    void multiplication();
    void division();


private slots:
    void modifLineEdit(int);

    void add();
    void sou();
    void mul();
    void div();
    void ega();

    void action();
    void efface();
};

#endif // MAINWINDOW_H

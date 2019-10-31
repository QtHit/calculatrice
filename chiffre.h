#ifndef CHIFFRE_H
#define CHIFFRE_H
#include <QPushButton>
#include <QDebug>


class chiffre : public QPushButton
{
    Q_OBJECT
public:
    chiffre(QWidget *parent=0);
signals:
    void envoiChiffre(int);
private slots:
    void afficheChiffre();
};

#endif // CHIFFRE_H


#include "chiffre.h"

chiffre::chiffre(QWidget *parent):QPushButton(parent)
{
    connect(this,SIGNAL(clicked(bool)),this,SLOT(afficheChiffre()));
}

void chiffre::afficheChiffre()
{
    int e=0;
    e=this->text().toInt();
    emit envoiChiffre(e);
}


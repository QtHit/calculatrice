#include "operateur.h"

operateur::operateur(QWidget *parent):QPushButton(parent)
{
}

void operateur::afficheOperateur()
{
    emit envoiOperateur();
}

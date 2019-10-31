#ifndef OPERATEUR_H
#define OPERATEUR_H
#include <QPushButton>


class operateur : public QPushButton
{
    Q_OBJECT
public:
    operateur(QWidget *parent=0);
signals:
    void envoiOperateur();
private slots:
    void afficheOperateur();
};

#endif // OPERATEUR_H

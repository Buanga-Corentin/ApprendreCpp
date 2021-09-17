#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"

class BarreRectangle: public Barre
{
public:
    BarreRectangle(string _reference, float _longueur, float _densite, string _nomAlliage, float _largeur, float _hauteur);
    void AfficherCaracteristiques();
    float CalculerSection();
    float CalculerMasse();
    ~BarreRectangle();
private:
    float largeur;
    float hauteur;

};

#endif // BARRERECTANGLE_H

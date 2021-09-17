#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"

class BarreCarree : public Barre
{
public:
    BarreCarree(string _reference, float _longueur, float _densite, string _nomAlliage, float _largeur);
    void AfficherCaracteristiques();
    float CalculerSection();
    float CalculerMasse();
    ~BarreCarree();
private:
    float largeur;

};

#endif // BARRECARREE_H

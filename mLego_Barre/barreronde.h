#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"

class BarreRonde: public Barre
{
public:
    BarreRonde(string _reference, float _longueur, float _densite, string _nomAlliage, float _diametre);
    float CalculerSection();
    float CalculerMasse();
    ~BarreRonde();
    
protected:
    float diametre;
};

#endif // BARRERONDE_H

#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"

class BarreRonde: public Barre
{
public:
    BarreRonde(string _reference, int _longueur, float _densite, string _nomAlliage);
    ~BarreRonde();
};

#endif // BARRERONDE_H

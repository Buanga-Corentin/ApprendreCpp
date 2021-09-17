#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"

class BarreRectangle: public Barre
{
public:
    BarreRectangle(string _reference, int _longueur, float _densite, string _nomAlliage, int _largeur);
    ~BarreRectangle();
private:
    int largeur;
};

#endif // BARRERECTANGLE_H

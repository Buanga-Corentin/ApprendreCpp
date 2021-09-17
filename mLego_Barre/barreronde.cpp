#include "barreronde.h"
#include <iostream>



BarreRonde::BarreRonde(string _reference, int _longueur, float _densite, string _nomAlliage):
    Barre(_reference,_longueur,_densite,_nomAlliage)
{
    cout << "constructeur de la classe BarreRonde" << endl;
}

BarreRonde::~BarreRonde()
{
    cout << "Destructeur de la classe BarreRonde" << endl;
}

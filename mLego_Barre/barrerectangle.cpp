#include "barrerectangle.h"
#include <iostream>




BarreRectangle::BarreRectangle(string _reference, int _longueur, float _densite, string _nomAlliage, int _largeur):
    Barre(_reference,_longueur,_densite,_nomAlliage),
    largeur(_largeur)

{
     cout << "constructeur de la classe BarreRectangle" << endl;
}

BarreRectangle::~BarreRectangle()
{
    cout << "Destructeur de la classe BarreRectangle" << endl;
}

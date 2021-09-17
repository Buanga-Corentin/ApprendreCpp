#include "barrecarree.h"
#include <iostream>

using namespace std ;

BarreCarree::BarreCarree(string _reference, int _longueur, float _densite, string _nomAlliage):
    Barre(_reference, _longueur, _densite, _nomAlliage)
{
    cout << "constructeur de la classe BarreCarree" << endl;
}

BarreCarree::~BarreCarree()
{
    cout << "Destructeur de la classe BarreCarree" << endl;
}

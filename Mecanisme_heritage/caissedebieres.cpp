#include "caissedebieres.h"
#include <iostream>

using namespace std;

CaisseDeBieres::CaisseDeBieres(const string _marque,const int _largeur, const int _hauteur, const int _profondeur, const int _nbBouteilles, const int _contenance):
    CaisseDeBouteilles(_nbBouteilles,_contenance, _largeur,_hauteur,_profondeur),
    marque(_marque)
{
    cout << "constructeur de la classe CaisseDeBieres" << endl;
}

CaisseDeBieres::~CaisseDeBieres()
{
    cout << "Destructeur de la classe CaisseDeBieres" << endl;
}




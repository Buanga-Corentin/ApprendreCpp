#ifndef CAISSEDEBIERES_H
#define CAISSEDEBIERES_H
#include "caissedebouteilles.h"
#include <string>

using namespace std;

class CaisseDeBieres : public CaisseDeBouteilles
{
public:
    CaisseDeBieres(const string _marque, const int _largeur, const int _hauteur, const int _profondeur, const int _nbBouteilles, const int _contenance);
    ~CaisseDeBieres();


private:
    string marque;
};

#endif // CAISSEDEBIERES_H

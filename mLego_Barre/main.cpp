#include <iostream>
#include "barre.h"
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"

using namespace std;

int main()
{

    Barre Poutre("DR4FT",120,50,"laiton");
    BarreCarree Cube("CR3PP3R",12,45,"acier",5);
    BarreRonde Cylindre("K4Z00",12,45,"acier",14);
    BarreRectangle Kapla("K4PL4",35,17,"Bronze",6,8);

    Cube.AfficherCaracteristiques();
    Cube.CalculerSection();
    cout << "Masse de la barre : " << Cube.CalculerMasse() << endl;
    cout << " " << endl;
    cout << "=============================================" << endl;

    Cylindre.AfficherCaracteristiques();
    Cylindre.CalculerSection();
    cout << "Masse de la barre : " << Cylindre.CalculerMasse() << endl;
    cout << " " << endl;
    cout << "=============================================" << endl;

    Kapla.AfficherCaracteristiques();
    Kapla.CalculerSection();
    cout << "Masse de la barre : " << Kapla.CalculerMasse() << endl;
    cout << " " << endl;
    cout << "=============================================" << endl;

    return 0;
}

#include "barreronde.h"
#include <iostream>


BarreRonde::BarreRonde(string _reference, float _longueur, float _densite, string _nomAlliage, float _diametre):
    Barre(_reference,_longueur,_densite,_nomAlliage),
    diametre(_diametre)
{
    cout << "constructeur de la classe BarreRonde" << endl;
}

float BarreRonde::CalculerSection()
{

    float section = 3.141592 * (diametre*diametre) /4;
//    cout << "Section de la Barre : " << section << endl;
    return section;

}

float BarreRonde::CalculerMasse()
{

    float masse = longueur * CalculerSection() * densite ;
//    cout << "Masse de la barre : " << masse << endl;
//    cout << " " << endl;
//    cout << "=============================================" << endl;

    return  masse;
}


BarreRonde::~BarreRonde()
{
    cout << "Destructeur de la classe BarreRonde" << endl;
}

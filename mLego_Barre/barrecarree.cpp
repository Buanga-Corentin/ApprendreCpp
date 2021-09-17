#include "barrecarree.h"
#include <iostream>

using namespace std ;


BarreCarree::BarreCarree(string _reference, float _longueur, float _densite, string _nomAlliage, float _longueurCote):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    longueurCote(_longueurCote)
{
    cout << "constructeur de la classe BarreCarree" << endl;
}

float BarreCarree::CalculerSection()
{


    float section = longueurCote * longueurCote;
   // cout << "Section de la Barre : " << section << endl;

    return section;
}

float BarreCarree::CalculerMasse()
{

    float masse = longueur * CalculerSection() * densite ;
//    cout << "Masse de la barre : " << masse << endl;
//    cout << " " << endl;
//    cout << "=============================================" << endl;


    return  masse;
}


BarreCarree::~BarreCarree()
{
    cout << "Destructeur de la classe BarreCarree" << endl;
}

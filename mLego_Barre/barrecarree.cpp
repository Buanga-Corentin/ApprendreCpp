#include "barrecarree.h"
#include <iostream>

using namespace std ;


BarreCarree::BarreCarree(string _reference, float _longueur, float _densite, string _nomAlliage, float _largeur):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    largeur(_largeur)
{
    cout << "constructeur de la classe BarreCarree" << endl;
}

void BarreCarree::AfficherCaracteristiques()
{
    cout << "=============================================" << endl;
    cout << " " << endl;
    cout << "Reférence : " << reference << endl;
    cout << "Longueur : " << longueur << endl;
    cout << "Densité : " << densite << endl;
    cout << "Nom de L'alliage : " << nomAlliage << endl;
    cout << "largeur : " << largeur << endl;
}

float BarreCarree::CalculerSection()
{


    float section = largeur * largeur;
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

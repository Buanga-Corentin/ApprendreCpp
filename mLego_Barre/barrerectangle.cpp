#include "barrerectangle.h"
#include <iostream>




BarreRectangle::BarreRectangle(string _reference, float _longueur, float _densite, string _nomAlliage, float _largeur, float _hauteur):
    Barre(_reference,_longueur,_densite,_nomAlliage),
    largeur(_largeur),
    hauteur(_hauteur)

{
    cout << "constructeur de la classe BarreRectangle" << endl;
}

void BarreRectangle::AfficherCaracteristiques()
{
    cout << "=============================================" << endl;
    cout << " " << endl;
    cout << "Reférence : " << reference << endl;
    cout << "Longueur : " << longueur << endl;
    cout << "Densité : " << densite << endl;
    cout << "Nom de L'alliage : " << nomAlliage << endl;
    cout << "largeur : " << largeur << endl;
    cout << "hauteur : " << hauteur << endl;
}

float BarreRectangle::CalculerSection()
{
    float section =largeur * hauteur ;
//    cout << "Section de la Barre : " << section << endl;

    return section;
}

float BarreRectangle::CalculerMasse()
{

    float masse = longueur * CalculerSection() * densite ;
//    cout << "Masse de la barre : " << masse << endl;
//    cout << " " << endl;
//    cout << "=============================================" << endl;

    return  masse;
}

BarreRectangle::~BarreRectangle()
{
    cout << "Destructeur de la classe BarreRectangle" << endl;
}

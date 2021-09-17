#include "barre.h"
#include <iostream>

using namespace std ;



Barre::Barre(string _reference, float _longueur, float _densite, string _nomAlliage):

    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    nomAlliage(_nomAlliage)
{
    cout << "Constructeur de la classe Barre" << endl;
}


void Barre::AfficherCaracteristiques()
{
    cout << "=============================================" << endl;
    cout << " " << endl;
    cout << "Reférence : " << reference << endl;
    cout << "Longueur : " << longueur << endl;
    cout << "Densité : " << densite << endl;
    cout << "Nom de L'alliage : " << nomAlliage << endl;
    cout << " " << endl;
    cout << "=============================================" << endl;
}

Barre::~Barre()
{
    cout << "Destructeur de la classe Barre" << endl;
}

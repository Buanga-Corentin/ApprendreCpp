#ifndef BARRE_H
#define BARRE_H

#include <string>
#include <iostream>

using namespace std;

class Barre
{
public:
    Barre(string _reference, float _longueur, float _densite, string _nomAlliage);
    void AfficherCaracteristiques();
    ~Barre();
protected:
    string reference;
    float longueur;
    float densite;
    string nomAlliage;
};

#endif // BARRE_H

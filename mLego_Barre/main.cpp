#include <iostream>
#include "barre.h"
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"

using namespace std;

int main()
{

    Barre Poutre("DR4FT",120,50,"laiton");
    BarreCarree Minecraft("CR3PP3R",12,45,"acier",5);
    BarreRonde Kazoo("K4Z00",12,45,"acier",14);
    BarreRectangle Kapla("K4PL4",35,17,"Bronze",6,8);

    Minecraft.AfficherCaracteristiques();
    Minecraft.CalculerSection();
    Minecraft.CalculerMasse();

    Kazoo.AfficherCaracteristiques();
    Kazoo.CalculerSection();
    Kazoo.CalculerMasse();

    Kapla.AfficherCaracteristiques();
    Kapla.CalculerSection();
    Kapla.CalculerMasse();

    return 0;
}

#include <iostream>
#include "carton.h"
#include "contenant.h"
#include "caissedebouteilles.h"
#include "caissedebieres.h"

using namespace std;

int main()
{
    Carton ups(20,40,60,120);
    CaisseDeBieres belge("Jupiler",20,40,60,36,33);


    belge.CalculerVolume();


    return 0;
}

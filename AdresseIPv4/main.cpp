#include <iostream>
#include "ipv4.h"


using namespace std;
void AfficherTableau(unsigned char *tab);
int main()
{

    unsigned char adresse[4]= {192,168,1,1};
    unsigned char reseau[4];
    IPv4 * uneAdresse = new IPv4(adresse, 24); // instanciation de la classe IPv4
    IPv4 adresseCopie = *uneAdresse; // l'instance est recopiée dans une autre
    cout << "Adresse réseau avant : ";
    adresseCopie.ObtenirAdresseReseau(reseau);
    AfficherTableau(reseau);
    delete uneAdresse; // destruction de la première instance
    cout << "Adresse réseau après destruction : ";
    adresseCopie.ObtenirAdresseReseau(reseau);
    AfficherTableau(reseau);

    IPv4 deuxiemeAdresse;
    deuxiemeAdresse=adresseCopie;
    deuxiemeAdresse.ObtenirAdresseReseau(reseau);
    AfficherTableau(reseau);


//    unsigned char adresse[4]= {192,168,1,1};
//    unsigned char masque[4];
//    unsigned char reseau[4];
//    unsigned char diffusion[4];
//    unsigned char premiere[4];
//    unsigned char derniere[4];


//    IPv4 uneAdresse(adresse, 24); // instanciation de la classe IPv4
//    cout << "Adresse IPv4 : ";
//    AfficherTableau(adresse);

//    uneAdresse.ObtenirMasque(masque); // appel d'une méthode
//    cout << "Masque : ";
//    AfficherTableau(masque);

//    uneAdresse.ObtenirAdresseReseau(reseau);
//    cout << "Réseau : ";
//    AfficherTableau(reseau);

//    uneAdresse.ObtenirAdresseDiffusion(diffusion);
//    cout << "Diffusion : ";
//    AfficherTableau(diffusion);

//    uneAdresse.ObtenirPremiereAdresse(premiere);
//    cout << "Première Adresse : ";
//    AfficherTableau(premiere);

//    uneAdresse.ObtenirDerniereAdresse(derniere);
//    cout << "Dernière Adresse : ";
//    AfficherTableau(derniere);


//    cout << "Nombre de machines : " << uneAdresse.ObtenirNombreMachines() << endl; // appel d'une méthode;



//    return 0;
}

void AfficherTableau(unsigned char *tab)
{
    for(int indice=0 ; indice < 4 ; indice ++)

    {
        cout  << static_cast<int> (tab[indice]);
        if(indice < 3)
            cout << "." ;
    }
    cout << endl;
}

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    string nomDuFichier;
    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier;
    //Création du flux en lecture sur le fichier
    ifstream fichier_lecture(nomDuFichier.c_str()); // c_str() transforme string en char*
    ofstream fichier_ecrire;
    fichier_ecrire.open("text.txt");

    if (!fichier_lecture.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;
        // A compléter, affichage de la première ligne du tableau

        fichier_ecrire << "+" << setfill('-') << setw(17) << "+" << setfill('-') << setw(8) << "+" << setfill('-') << setw(8) << "+" << setfill('-') << setw(8) << "+" << setfill(' ') << endl;

        do
        {
            //récupération des valeurs
            fichier_lecture >> pays >> nbOr >> nbArgent >> nbBronze;
            if (fichier_lecture.good())//Si les valeurs ont bien été lues
            {
                // A compléter, affichage de chaque ligne du tableau

                fichier_ecrire << "|" << setw(16) << left << pays << "|" << setw(7) << right << nbOr << "|" << setw(7) << nbArgent << "|"  << setw(7) << nbBronze << "|" << endl;
            }
        } while (!fichier_lecture.eof());
        // A compléter, affichage de la dernière ligne du tableau.

        fichier_ecrire << "+" << setfill('-') << setw(17) << "+" << setfill('-') << setw(8) << "+" << setfill('-') << setw(8) << "+" << setfill('-') << setw(8) << "+" << setfill(' ') << endl;

    }





        return 0;
}

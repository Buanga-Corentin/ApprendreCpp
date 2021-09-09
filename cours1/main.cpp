#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //   float temperature;
    //   float humidite;
    //   int pression;

    //   cout << "Saisir la temperature, l'humidité et la pression : ";
    //   cin >> temperature >> humidite >> pression ;

    //   cout << "la temperature est : " << temperature << " °" << endl;
    //   cout << "le taux d'humidite est : " << humidite << " %" << endl;
    //   cout << "la pression est : " << pression << " hPa" << endl;

     //    return 0;





    //Ne recupere pas la chaine de caractère mais le premier mots

    //    char phrase[80+1];
    //    cout << "Sair une phrase : " ;
    //    cin >> phrase;
    //    cout << "Votre phrase est : " << phrase << endl;

     //    return 0;



    // Pour recuperer la chaines de caractères utiliser la fonction getLine

    //    char phrase[80+1];
    //    cout << "Sair une phrase : " ;
    //    cin.getline(phrase,80);
    //    cout << "Votre phrase est : " << phrase << endl;

     //    return 0;



    // affichage des nombres sous differentes formes

    //    int val = 192;
    //    cout << "Affichage par défaut     :" << val << endl;
    //    cout << "Affichage en hexadecimal :" << hex << val << endl;
    //    cout << "Affichage en decimal     :" << dec << val << endl;

    //    return 0;






    // Different types d'affichage et d'action réalisable


    //    int val = 192;
    //    float val2 = 3.141592654;
    //    bool sortie = true;
    //    cout  << "Affichage par défaut     : " << val << endl;
    //    cout  << "Affichage en hexadécimal : " << hex << val << endl;
    //    cout  << "Affichage en décimal     : " << dec << val << endl;
    //    cout << hex << val << " " << uppercase << val << " " ;
    //    cout << showbase  << val << nouppercase << " " << val << endl;
    //    cout << "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
    //    cout << "|" << setw(20) << left << "abc" << "|" << endl;
    //    cout << "|" << setw(20) << right << "abc" << "|" << endl;
    //    cout << "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
    //    cout << dec << sortie << " " << boolalpha << sortie << endl;
    //    cout << val2 << " " << fixed << val2 << " " << scientific << val2 << " ";
    //    cout << fixed << setprecision(2) << val2 << endl;
    //    cout  << "Entrez un nombre en octal : " ;
    //    cin >> oct >> val ;
    //    cout << "vous avez saisie " << dec << val << " en decimal" << endl;


    //    return 0;




    // Lecture de fichier

    string nomDuFichier;
        cout << "Entrer le nom du fichier à lire : ";
        cin >> nomDuFichier;
        //Création du flux en lecture sur le fichier
        ifstream leFichier(nomDuFichier.c_str()); // c_str() transforme string en char*
        if (!leFichier .is_open())
            cerr << "Erreur lors de l'ouverture du fichier" << endl;
        else
        {
            string pays;
            int nbOr;
            int nbArgent;
            int nbBronze;
            // A compléter, affichage de la première ligne du tableau
            do
            {
    //récupération des valeurs
                leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
                if (leFichier.good())//Si les valeurs ont bien été lues
                {
                    // A compléter, affichage de chaque ligne du tableau
                }
            } while (!leFichier.eof());
            // A compléter, affichage de la dernière ligne du tableau.
        }
        return 0;











}

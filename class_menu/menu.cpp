#include "menu.h"
#include <string>


Menu::Menu(const string &_nom):nom(_nom), longeurMax(0)
{


    //Création du flux en lecture sur le fichier
        ifstream leFichier(_nom.c_str()); // c_str() transforme string en char*
        if (!leFichier .is_open())
        {
             nbOption = 0;
            cerr << "Erreur lors de l'ouverture du fichier" << endl;
        }else{
                   int numero;
                   string Option;

            nbOption = static_cast<int>(count(istreambuf_iterator<char>(leFichier),istreambuf_iterator<char>(),'\n'));

            cout << "+" << setfill('-') << setw(5) << "+" << setfill('-') << setw(10) << "+" << setfill(' ') << endl;
            do
                   {
                       //récupération des valeurs
                       leFichier >> numero >> Option ;
                       if (leFichier.good())//Si les valeurs ont bien été lues
                       {
                           // A compléter, affichage de chaque ligne du tableau

                           cout << "|" << setw(5) << numero << "|" << setw(10) << Option << "|" <<  endl;

                       }
                   } while (!leFichier.eof());

            for(int i = 0; i<nbOption; i++)
            {

                    if(nbOption > longeurMax)
                    longeurMax =nbOption;
            }


            }
            cout << "+" << setfill('-') << setw(5) << "+" << setfill('-') << setw(10) << "+" << setfill(' ') << endl;





}

Menu::~Menu()
{

}






void Menu::AttendreAppuiTouche()
{

    string uneChaine;
        cout << endl << "appuyer sur la touche Entrée pour continuer...";
        getline(cin,uneChaine);
        cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );
        system("clear");
}


int Menu::Afficher()
{
    int n = 0;


    return n ;
}





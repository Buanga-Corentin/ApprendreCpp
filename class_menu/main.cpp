#include <iostream>
#include <stdlib.h>
#include "menu.h"

using namespace std;

int main()
{
    int choix;
       Menu leMenu("menu.txt");
       do
       {
           choix = leMenu.Afficher();
           switch (choix)
           {
           case OPTION_1:
               cout << "Vous avez choisi l'option n°1" << endl;
               Menu::AttendreAppuiTouche();
               break;

           case OPTION_2:
               cout << "Vous avez choisi l'option n°2" << endl;
               Menu::AttendreAppuiTouche();
               break;

           case OPTION_3:
               cout << "Vous avez choisi l'option n°3" << endl;
               Menu::AttendreAppuiTouche();
               break;

           case OPTION_4:
               cout << "Vous avez choisi l'option n°4" << endl;
               Menu::AttendreAppuiTouche();
               break;

           case QUITTER:
               break;
           // à compléter
           }
       } while(choix != QUITTER);

       return 0;
}

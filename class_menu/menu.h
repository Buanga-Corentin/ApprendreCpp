#ifndef MENU_H
#define MENU_H

#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

class Menu
{

private:
    string nom;
    string * options;
    int nbOption;
    int longeurMax;

public:
    Menu(const string &_nom);
    ~Menu();
    static void AttendreAppuiTouche();
    int Afficher();


};

#endif // MENU_H

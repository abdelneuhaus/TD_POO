#include <iostream>
#include "Pile.h"

int main(){

    Pile p1(2);     // Création d'une pile à 3 cases (0, 1 et 2)

    p1.empile(2);
    std::cout << "Etat (pleine (1) ou non (0)) : " << p1.pleine() << "\n";
    p1.empile(3);
    std::cout << "Etat (pleine (1) ou non (0)) : " << p1.pleine() << "\n";
    p1.empile(5);
    std::cout << "Etat (pleine (1) ou non (0)) : " << p1.pleine() << "\n";

    p1.depile();
    p1.depile();
    std::cout << "C'est vide (1) ou pas (0) : " << p1.vide() << "\n";   


    p1.~Pile();

    return 0;
}
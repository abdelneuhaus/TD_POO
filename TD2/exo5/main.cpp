#include <iostream>
#include "Personnage.h"


void affiche(const int& n){
    /* n ++;
    Erreur car on ne peut modifier un argument passé en const dans le prototype
    */
    std::cout << n << "\n";
}

int main(){
    // Exo1
    int n = 2;
    affiche(2);
    
    return 0;
}
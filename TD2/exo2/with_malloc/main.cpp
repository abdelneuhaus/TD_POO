#include <iostream>
#include "Personnage.h"

int main(){
    
    Personnage *tableauP = new Personnage[3];
    char nomP1[20] = "Alpha";
    char prenomP1[20] = "Beta";

    // On alloue dynamiquement chaque case
    Personnage alpha(nomP1, prenomP1, 3);
    tableauP[0] = alpha;
    Personnage beta;
    tableauP[1] = beta;
    Personnage gamma(alpha);
    tableauP[2] = gamma;   // Récupère les valeurs stockées dans la case pointée

    // Sur C++ 11 et +, on peut aussi utiliser for(Personne *personne : personnes)
    for(int i = 0; i < 3; i++){
        tableauP[i].affiche();
    }
    delete[] tableauP;

    return 0;
}
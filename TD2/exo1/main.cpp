#include "Personnage.h"

int main(){
    
    char nomP1[20] = "Alpha";   // Initialisation du nom
    char prenomP1[20] = "Beta"; // Initialisation du prénom
    Personnage *personnes[3];   // Création d'un tableau de 3 pointeurs de type Personnage

    // On alloue dynamiquement chaque case
    personnes[0] = new Personnage(nomP1,prenomP1,3);
    personnes[1] = new Personnage();
    personnes[2] = new Personnage(*personnes[0]);

    // Sur C++ 11 et +, on peut aussi utiliser for(Personne *personne : personnes)
    for(int i = 0; i < sizeof(personnes)/sizeof(personnes[0]); i++){
        personnes[i]->affiche();    // On utilise -> pour accéder à cette méthode (car personne est une adresse (un ptr stocke une adresse)) 
    }
    delete []personnes;

    return 0;
}
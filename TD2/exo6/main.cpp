#include <iostream>

int main() {

    int *p = new int;
    const int* q = new int;     // pointeur to const int
    int* const r = new int;     // const pointer to int

    p = new int;    // Aucun soucis pour la modification
    *p = 1;         // Aucun soucis

    q = new int;    // Aucun soucis pour la modification
    //*q = 1          // On veut modifier le contenu du pointeur qui est déclaré constant
    
    //r = new int;    // On ne peut pas modifier un pointeur via un new
    *r = 6;          // Aucun soucis


    // Création d'un tableau de pointeurs sur 10 entiers (faire 2 boucles : une pour créer et une pour supprimer)
    int *tableau[10];  
    for (int i = 0; i < sizeof(tableau)/sizeof(tableau[0]); i++){
        tableau[i] = new int;
        std::cout << tableau[i] << std::endl;
    }

    for (int i = 0; i < sizeof(tableau)/sizeof(tableau[0]); i++){
        delete tableau[i];
    }

    int &s = *p;
    const int &t = *p;



    // Affectations

//  p = q;    on ne peut affecter un pointeur d'entier constant à un pointeur d'entier non constant
    p = r; // on peut affecter un pointeur constant d'entier à un pointeur d'entier
//  p = s;    on ne peut affecter directement une variable (ici un entier référencé) à un pointeur (*p = s; fonctionne)
//  p = t;    on ne peut affecter directement une variable (ici un entier référencé) à un pointeur (*p = t; fonctionne)

    q = p; // on peut affecter un pointeur d'entier non constant à un pointeur d'entier constant
    q = r; // on peut affecter un pointeur d'entier non constant à un pointeur d'entier constant
//  q = s;    on ne peut affecter directement une variable (ici un entier référencé) à un pointeur (*q = s; fonctionne)
//  q = t;    on ne peut affecter directement une variable (ici un entier référencé) à un pointeur (*q = t; fonctionne)

//  r = p;    r constant
//  r = q;    r constant
//  r = s;    r constant
//  r = t;    r constant

//  s = p;    on ne peut affecter directement un pointeur à une variable (ici un entier référencé) (s = *p; fonctionne)
//  s = q;    on ne peut affecter directement un pointeur à une variable (ici un entier référencé) (s = *q; fonctionne)
//  s = r;    on ne peut affecter directement un pointeur à une variable (ici un entier référencé) (s = *r; fonctionne)
    s = t; // on peut affecter une variable constante à une autre variable (ici des entiers référencés)

//  t = p;    t constant
//  t = q;    t constant
//  t = r;    t constant
//  t = s;    t constant
    

    delete p;
    delete q;
    delete r;
    
    return 0;
}
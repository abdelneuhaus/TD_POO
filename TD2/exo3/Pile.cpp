#include <iostream>
#include <cstring>
#include "Pile.h"

int Pile::tailleContenu = -1;


Pile::Pile(){
    m_tableau = (int *) malloc(20 * sizeof(int));
};


Pile::Pile(int n){
    m_tableau = (int *) malloc((n * sizeof(int)));
};


Pile::Pile(const Pile &PileCopie) : size(PileCopie.size){
    m_tableau = (int *) malloc((sizeof(PileCopie)));
    memcpy(m_tableau, PileCopie.m_tableau, sizeof(PileCopie.m_tableau) + 1);    
    // memcpy(destination, source, numOfBytesToCopy)
};

Pile::~Pile(){
    free(this ->m_tableau);
};


void Pile::empile(int p){
    if (tailleContenu != (sizeof(m_tableau)/sizeof(int))){
        m_tableau[tailleContenu + 1] = p;
        tailleContenu++;
    }
    else{
        std::cout << "Pleine" << "\n";
    }
};

int Pile::depile(){
    std::cout << m_tableau[tailleContenu] << "\n";
    tailleContenu--;
};


int Pile::vide(){
    if(tailleContenu == -1){
        return 1;
    }
    else{
        return 0;
    }
};

int Pile::pleine(){
    if (tailleContenu == (sizeof(m_tableau)/sizeof(int))){
    // Si la division entre taille en bytes total/taille d'un int = taille contenu
        return 1;
    } 
    else{
        return 0;
    }
};
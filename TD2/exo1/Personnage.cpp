#include <iostream>
#include "Personnage.h"
#include <cstring>


Personnage::Personnage(): m_nom("Inconnu"), m_prenom("Inconnu"), m_age(0){};


Personnage::Personnage(char nom[20], char prenom[20], int age) : m_age(age){
    strcpy(m_nom, nom);
    strcpy(m_prenom, prenom);
};

Personnage::Personnage(const Personnage &PersoACopier) : m_age(PersoACopier.m_age){
    strcpy(m_nom, PersoACopier.m_nom);
    strcpy(m_prenom, PersoACopier.m_prenom);
};

Personnage::~Personnage(){};


void Personnage::affiche() const{
    std::cout << "Prénom : " << m_prenom << "\n";
    std::cout << "Nom : " << m_nom << "\n";
    std::cout << "Age : " << m_age << "\n";
    std::cout << "\n";
};


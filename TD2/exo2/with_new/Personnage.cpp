#include <iostream>
#include "Personnage.h"
#include <cstring>


Personnage::Personnage() : m_age(0){
    this->m_nom = new char[strlen("Inconnu")];
    this->m_prenom = new char[strlen("Inconnu")];
    strcpy(this->m_nom, "Inconnu"); // Une façon de remplir m_nom
    strcpy(m_prenom, "Inconnu");    // et une autre
};


Personnage::Personnage(char *nom, char *prenom, int age) : m_age(age){
    m_nom = new char[20];
    m_prenom = new char[20];
    strcpy(m_nom, nom);
    strcpy(m_prenom, prenom);
};

Personnage::Personnage(const Personnage &PersoACopier) : m_age(PersoACopier.m_age){
    this->m_nom = new char[strlen(PersoACopier.m_nom)];
    this->m_prenom = new char[strlen(PersoACopier.m_prenom)];
    strcpy(m_nom, PersoACopier.m_nom);
    strcpy(m_prenom, PersoACopier.m_prenom);
};

Personnage::~Personnage(){
    delete[] m_nom;
    delete[] m_prenom;
};
 
void Personnage::affiche() const{
    std::cout << "Prénom : " << m_prenom << "\n";
    std::cout << "Nom : " << m_nom << "\n";
    std::cout << "Age : " << m_age << std::endl;
};


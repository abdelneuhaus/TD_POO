#include <iostream>
#include <cstring>
#include "Personnage.h"


Personnage::Personnage() : m_age(0){
    m_nom = (char *) malloc((strlen("Inconnu") * sizeof(char)));
    m_prenom = (char *) malloc((strlen("Inconnu") * sizeof(char)));
    strcpy(this->m_nom, "Inconnu"); // Une façon de remplir m_nom
    strcpy(m_prenom, "Inconnu");    // et une autre
};


Personnage::Personnage(char *nom, char *prenom, int age) : m_age(age){
    m_nom = (char *) malloc((strlen(nom)*sizeof(char)));
    m_prenom = (char *) malloc((strlen(nom)*sizeof(char)));
    strcpy(m_nom, nom);
    strcpy(m_prenom, prenom);
};

Personnage::Personnage(const Personnage &PersoACopier) : m_age(PersoACopier.m_age){
    m_nom = (char *) malloc((strlen(m_nom)*sizeof(char)));
    m_prenom = (char *) malloc((strlen(m_nom)*sizeof(char)));
    strcpy(m_nom, PersoACopier.m_nom);
    strcpy(m_prenom, PersoACopier.m_prenom);
};

Personnage::~Personnage(){
    free(this->m_nom);
    free(this->m_prenom);
};


void Personnage::affiche() const{
    std::cout << "Prénom : " << m_prenom << "\n";
    std::cout << "Nom : " << m_nom << "\n";
    std::cout << "Age : " << m_age << std::endl;
};


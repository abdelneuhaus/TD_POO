#include <iostream>
#include "Personnage.h"
#include <cstring>


Personnage::Personnage(){
    m_nom = (char *) malloc((strlen("Inconnu") * sizeof(char)));
    m_prenom = (char *) malloc((strlen("Inconnu") * sizeof(char)));
    strcpy(m_nom, "Inconnu");
    strcpy(m_prenom, "Inconnu");
    this->m_age = 0;
};


Personnage::Personnage(char *nom, char *prenom, int age){
    m_nom = (char *) malloc((strlen(nom)*sizeof(char)));
    m_prenom = (char *) malloc((strlen(nom)*sizeof(char)));
    strcpy(m_nom, nom);
    strcpy(m_prenom, prenom);
    this->m_age = age;
};

Personnage::Personnage(Personnage &PersoACopier){
    m_nom = (char *) malloc((strlen(m_nom)*sizeof(char)));
    m_prenom = (char *) malloc((strlen(m_nom)*sizeof(char)));
    strcpy(m_nom, PersoACopier.m_nom);
    strcpy(m_prenom, PersoACopier.m_prenom);
    this->m_age = PersoACopier.m_age;
};

Personnage::~Personnage(){
    free (this->m_nom);
    free (this->m_prenom);
};


void Personnage::affiche(Personnage P) const{
    std::cout << "Prénom : " << m_prenom << "\n";
    std::cout << "Nom : " << m_nom << "\n";
    /*
    this->age = 0;
    Erreur car on ne peut modifier l'instance de Personne dans une méthode avec const à la fin du prototype
    */
    std::cout << "Age : " << m_age << std::endl;
};


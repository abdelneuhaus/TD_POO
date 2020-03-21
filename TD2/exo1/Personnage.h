#ifndef PERSONNE_H
#define PERSONNE_H

class Personnage{
    public:
        Personnage();
        Personnage(char nom[20], char prenom[20], int age);
        Personnage(const Personnage &PersoACopier);
        ~Personnage();
        void affiche() const;

    private:
        char m_nom[20];
        char m_prenom[20];
        int m_age;
};

#endif

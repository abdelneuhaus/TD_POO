#ifndef _PERSONNE_H
#define _PERSONNE_H

class Personnage{
    public:
        Personnage();
        Personnage(char *nom, char *prenom, int age);
        Personnage(Personnage &PersoACopier);
        ~Personnage();
        void affiche(Personnage P) const;
           

    private:
        char *m_nom;
        char *m_prenom;
        int m_age;
};

#endif
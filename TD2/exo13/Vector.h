#ifndef _VECTOR_H
#define _VECTOR_H
#define TAILLE 3

class Matrix{};

class Vector{
    private:
        double vect[TAILLE];

    public:
        Vector(double t[TAILLE]){
            for(int i=0; i<TAILLE; i++)
                vect[i]=t[i];
            }
        Vector produit(Matrix mat, Vector vect){}

        void affiche();

        friend Vector produit(Matrix matrice, Vector vecteur);

        friend Vector operator*(Matrix matrice, Vector vecteur);

};

#endif

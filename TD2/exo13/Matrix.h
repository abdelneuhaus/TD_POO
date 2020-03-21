#ifndef _MATRIX_H
#define _MATRIX_H
#define TAILLE 3

class Vector{};

class Matrix{
    private:
        double mat[TAILLE][TAILLE];

    public:
        Matrix(double t[TAILLE][TAILLE]){
            int i,j;
            for(int i=0; i<TAILLE; i++){
                for(int j=0; j<TAILLE; j++){
                    mat[i][j] = t[i][j];
                }
            }
        }

        Vector produit(Vector vecteur);

        void affiche();

        friend Vector produit(Matrix matrice, Vector vecteur);

        friend Vector operator*(Matrix matrice, Vector vecteur);

};

#endif

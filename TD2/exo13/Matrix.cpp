#include "Matrix.h"
#include "Vector.h"
#include <iostream>
using namespace std;


Vector Matrix::produit(Vector vecteur) {
    double b[TAILLE];
    for (int i = 0; i < TAILLE; i++) {
        double sum = 0;
        for (int j = 0; j < TAILLE; j++) {
            sum += mat[i][j] * vecteur.vect[j];
        }
        b[i] = sum;
    }
    return Vector(b);
}

void Matrix::affiche() {
    for (auto &i : mat) {
        cout << "|";
        for (int j = 0; j < TAILLE - 1; j++) {
            cout << i[j] << ", ";
        }
        cout << i[TAILLE - 1] << "|\n";
    }
    cout << endl;
}
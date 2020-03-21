#include "Vector.h"
#include <iostream>
using namespace std;

void Vector::affiche() {
    cout << "(";
    for (int i = 0; i < TAILLE - 1; i++) {
        cout << vect[i] << ", ";
    }
    cout << vect[TAILLE - 1] << ")\n";
}
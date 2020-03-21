#include <iostream>
#include "Vector3D.h"
using namespace std;


int main(){
    Vector3D a = Vector3D(1, 2, 3);
    Vector3D b = Vector3D();

    a.affiche();
    b.affiche();
    cout << a.coincide(b) << endl;

    cout << "Changement de coordonnées de B" << endl;
    b.fixer_abscisse(1);
    b.fixer_cote(3);
    b.fixer_ordonne(2);
    cout << a.coincide(b) << endl;

    cout << "Produit scalaire : " << a.produitScalaire(b) << endl;

    Vector3D c = a.somme(b);
    c.affiche();

    return 0;
}
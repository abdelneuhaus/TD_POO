#include <iostream>
#include "Vector3D.h"
using namespace std;


int main(){
    Vector3D a = Vector3D(1, 2, 3);
    Vector3D b = Vector3D();

    a.affiche();
    b.affiche();

    cout << "Changement de coordonnées de B" << endl;
    b.fixer_abscisse(1);
    b.fixer_cote(3);
    b.fixer_ordonne(2);

    return 0;
}
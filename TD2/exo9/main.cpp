#include <iostream>
#include "Vector3D.h"
using namespace std;


int main(){
    
    Vector3D a = Vector3D(1, 2, 3);
    Vector3D b = Vector3D();
    a.affiche();
    b.affiche();

    return 0;
}
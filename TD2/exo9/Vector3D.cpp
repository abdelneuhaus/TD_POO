#include "Vector3D.h"
#include <iostream>
using namespace std;

// inline = appel du corps lorsque l'on fait appel à la fonction/class


Vector3D::Vector3D() : m_x(0), m_y(0), m_z(0){}

Vector3D::Vector3D(double x, double y, double z) : m_x(x), m_y(y), m_z(z){}

void Vector3D::affiche(){
    cout << '(' << m_x << ", " << m_y << ", " << m_z << ")" << endl;
}

void Vector3D::affiche(const char* string){
    cout << string << endl;
    affiche();
}



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

int Vector3D::abscisse(){
    return m_x;
}

int Vector3D::ordonne(){
    return m_y;
}

int Vector3D::cote(){
    return m_z;
}

void Vector3D::fixer_abscisse(int nouvelle_abscisse){
    this->m_x = nouvelle_abscisse;
}

void Vector3D::fixer_ordonne(int nouvelle_ordonne){
    this->m_y = nouvelle_ordonne;
}

void Vector3D::fixer_cote(int nouvelle_cote){
    this->m_z = nouvelle_cote;
}

bool Vector3D::coincide(Vector3D v){
    if((v.m_x == m_x) && (v.m_y == m_y) && (v.m_z == m_z)){
        return true;
    }
    else{
        return false;
    }
}

double Vector3D::produitScalaire(Vector3D v){
    return m_x * v.m_x + m_y * v.m_y + m_z * v.m_z;
}

Vector3D Vector3D::somme(Vector3D v){
    double x_res = m_x + v.m_x;
    double y_res = m_y + v.m_y;
    double z_res = m_z + v.m_z;
    Vector3D sumVector(x_res, y_res, z_res);
    return sumVector;
}
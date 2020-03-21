#include "Point.hpp"
#include <iostream>
#include <string>

Point::Point(std::string nom){
    int x = 0;
    int y = 0;
    this -> nom = nom;
}

Point::Point(int x, int y, std::string nom){
    this -> x = x;
    this -> y = y;
    this -> nom = nom;
}

int Point::nb_default = 0;
int Point::nb_copies = 0;
int Point::nb_param = 0;
int Point::nb_destruc = 0;

Point::~Point(){}

Point::Point(const Point &other){
    x = other.x;
    y = other.y;
    nom = other.nom;
}

int Point::getAbs(){
    return x;
}

int Point::getOrd(){
    return y;
}

int Point::setAbs(Point P, int new_value){
    P.x = new_value;
}

int Point::setOrd(Point P, int new_value){
    P.y = new_value;
}

Point Point::initialise(Point P){
    std::cout << "Donnez l'abscisse" << "\n";
    std::cin >> P.x;
    std::cout << "Donnez l'ordonné" << "\n";
    std::cin >> P.y;
    return P;
    
}

void Point::affiche(Point P){
    std::cout << "Les coordonnées du point sont : X = " << P.x << " et Y = " << P.y << std::endl;
}


void Point::distance(Point A, Point B){
    int xa = A.getAbs();
    int ya = A.getOrd();
    int xb = B.getAbs();
    int yb = B.getOrd();
    int distance;
    distance = (xb - xa)/(yb - ya);
    std::cout << "Distance : " << distance << std::endl;
}

int Point::getDef(){
    return nb_default;
}

int Point::getCop(){
    return nb_copies;
}

int Point::getPar(){
    return nb_param;
}

int Point::gerDes(){
    return nb_destruc;
}
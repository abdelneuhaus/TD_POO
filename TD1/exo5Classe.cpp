#include <iostream>
#include <string>
#include <cmath>

class Point{
    public:
        int x;
        int y;
        char nom;

int getAbs(Point P){
    return P.x;
}

int getOrd(Point P){
    return P.y;
}

int setAbs(Point P, int new_value){
    P.x = new_value;
}

int setOrd(Point P, int new_value){
    P.y = new_value;
}

Point initialise(Point P){
    std::cout << "Donnez l'abscisse" << "\n";
    std::cin >> P.x;
    std::cout << "Donnez l'ordonné" << "\n";
    std::cin >> P.y;
    return P;
    
}

void affiche(Point P){
    std::cout << "Les coordonnées du point sont : X = " << P.x << " et Y = " << P.y << std::endl;
}
};

void distance(Point A, Point B){
    int xa = A.getAbs(A);
    int ya = A.getOrd(A);
    int xb = B.getAbs(B);
    int yb = B.getOrd(B);
    int distance;
    distance = (xb - xa)/(yb - ya);
    std::cout << "Distance : " << distance << std::endl;
}

int main(){
    Point A{0,0,'A'};
    Point B{100,12,'B'};
    A = A.initialise(A);
    A.affiche(A);
    distance(A,B);

    return 0;
}
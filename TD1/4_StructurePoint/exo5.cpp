#include <iostream>
#include <string>

struct Point{
    int abscisse;
    int ordonne;
    char nom;
};

Point initialise(struct Point P){
    std::cout << "Donnez le nouvel abscisse" << "\n";
    std::cin >> P.abscisse;
    std::cout << "Donnez le nouvel ordonné" << "\n";
    std::cin >> P.ordonne;
    return P;
}

void affiche(struct Point P){
    std::cout << "Les coordonnées du point sont : X = " << P.abscisse << " et Y = " << P.ordonne << std::endl;
}

int main(){
    Point P{0,0,'A'};
    P = initialise(P);
    affiche(P);

    return 0;
}
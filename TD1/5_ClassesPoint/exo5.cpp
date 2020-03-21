/* Ecrire une classe Point qui contiendra les réels correspondant à l'abscisse et à l'or-
donnée et d'un nom qui est un caractère de l'alphabet.

2. Ajouter des méthodes :
 initialise pour attribuer des valeurs aux "coordonnées" d'un point.
 deplace pour modifier les coordonnées d'un point. 
 affiche pour afficher les coordonnées d'un point.
*/

#include <iostream>

class Point{

    public:
    // Constructeur
    Point(int x, int y, char m_nom){
        this-> x = x;
        this-> y = y;
        this -> m_nom = m_nom;
    };

    // Attributs
    int x;
    int y;
    char m_nom;

    // Méthodes
    void affiche(Point p){
        std::cout << "Le point a pour coordonnée x:" << p.getAbs(p) << " et comme ordonnée y:" << p.getOrd(p) << "\n";
    }

    Point initialize(Point p, int abscisse, int ordonne){
        p.x = abscisse;
        p.y = ordonne;
        return p;
    }

    int getAbs(Point P){return P.x;}
    int getOrd(Point P){return P.y;}
    char getName(Point P){return P.m_nom;}
};


int main(){

    Point p(0,0,'A');
    p = p.initialize(p,1,2);
    p.affiche(p);

    return 0;
}
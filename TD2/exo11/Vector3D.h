#ifndef _VECTEUR3D_H
#define _VECTEUR3D_H

class Vector3D{

    public:
        void affiche();
        void affiche(const char* string);
        Vector3D();
        Vector3D(double x, double y, double z);
        int abscisse();
        int ordonne();
        int cote();
        void fixer_abscisse(int nouvelle_abscisse);
        void fixer_ordonne(int nouvelle_ordonne);
        void fixer_cote(int nouvelle_cote);
        bool coincide(Vector3D v);
        double produitScalaire(Vector3D v);
        Vector3D somme(Vector3D v);


    private:
        double m_x;
        double m_y;
        double m_z;

};

#endif

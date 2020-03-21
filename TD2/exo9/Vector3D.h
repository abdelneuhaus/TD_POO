#ifndef _VECTEUR3D_H
#define _VECTEUR3D_H

class Vector3D{

    public:
        void affiche();
        void affiche(const char* string);
        Vector3D();
        Vector3D(double x, double y, double z);

    private:
        double m_x;
        double m_y;
        double m_z;

};

    inline Vector3D::Vector3D(){
        m_x = 0;
        m_y = 0;
        m_z = 0;
    }

    inline Vector3D::Vector3D(double x, double y, double z){
        this->m_x = x;
        this->m_y = y;
        this->m_z = z;
    }

#endif

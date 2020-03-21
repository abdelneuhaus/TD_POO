#if !defined(__POINT__)
#define __POINT__

#include <string>


class Point{
    public:
        Point(std::string nom);
        Point(int x, int y, std::string nom);
        ~Point();
        Point(const Point &other);

        int getAbs();
        int getOrd();

        int setAbs(Point P, int new_value);
        int setOrd(Point P, int new_value);
        Point initialise(Point P);
        void affiche(Point P);
        void distance(Point A, Point B);
        int getDef();
        int getCop();
        int getPar();
        int gerDes();
        
    private:
        int x;
        int y;
        std::string nom;
        static int nb_default;
        static int nb_copies;
        static int nb_param;
        static int nb_destruc;
};

#endif
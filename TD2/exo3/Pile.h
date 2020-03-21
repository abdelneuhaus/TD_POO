#ifndef __PILE__
#define __PILE__

class Pile{

    public:
        Pile(int n);
        Pile();
        Pile(const Pile &PileCopie);
        ~Pile();
        void empile(int p);
        int depile();
        int pleine();
        int vide();


    private:
        int *m_tableau;
        static int tailleContenu;
        int size;
};

#endif
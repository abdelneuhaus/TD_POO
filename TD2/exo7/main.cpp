#include <iostream>
using namespace std;

//ceci est une macro (ne pas utiliser, plutôt les inline)
#define copie1(source,dest) source = dest;
inline void copie2(int source, int dest){source = dest;}
// inline = chaque appel de la fonction devra être remplacé par le corps (il faut donc de petites fonctions)


#define recursive1(n) (n==0)?1: recursive1(n-1)
// x ? y : Z = if(x) y else z

inline int recursive2(int n) {
    int val;
    if (n == 0) {
        val = 1;
    } else {
        val = recursive2(n - 1) + 1;
    }
    cout << val << endl;
    return val;
}

int main() {

    int a = 2;
    int b = 1;

    copie1(a, b);
    cout << a << endl;

    a = 2;

    copie2(a, b);   //marche pas car il faudrait passer par référence
    cout << a << endl;

    float c = 1.2;
    float d = 1.3;

    copie1(c, d)
    cout << c << endl;

    c = 1.3;
    copie2(c, d);
    cout << c << endl;

    //cout << recursive1(5) << endl;    marche pas 
    recursive2(5);  //marche mais peu devenir long

    return 0;
}

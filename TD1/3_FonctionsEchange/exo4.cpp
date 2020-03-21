#include <iostream>
using namespace std;

main(){
    void echange1(int, int);
    void echange2(int*, int*);    //
    void echange3(int &, int &);    // Prend la valeur de int et et pointe sur une même case 
    int n=10, p=20;
    cout << "avant appel : " << n << " " << p << "\n";
    echange2(n,p);
    cout << "après appel : " << n << " " << p << "\n";
}

void echange1(int a, int b){
    int c;
    c = a; a = b; b = c; 
}

void echange2(int* a, int* b){
}
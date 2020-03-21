#include <iostream>
using namespace std;
main(){
    int n=10, p=20;
    void fct(int, int = 12);
    fct(n,p);
    fct(n);
}

void fct(int a, int b){
    cout << "premier arg" << a << "\n";
    cout << "deuxieme arg" << b << "\n";
}
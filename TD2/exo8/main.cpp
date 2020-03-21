#include <iostream>
#include <cstring>

using namespace std;

int somme(int a,int b){
    return a + b;
}

float somme(float a, float b){
    return a + b;
}

int *somme(const int tab[], const int tab2[]){
    static int res[sizeof(tab) - 1];
    for(int i = 0; i < sizeof(tab) - 1; i++){
        res[i] = *(tab + i) + *(tab2 + i);
    }
    return res;
}


int somme(int a, int b, int c) {
    return a + b + c;
}

float somme(int a, float b) {
    return a + b;
}


int main(){

    short a = 1;
    short b = 2;
    cout << somme(a,b) << endl;

    return 0;
}
#include <iostream>
#define MAX1 100;   
int main(){

    static const int MAX2 = 100;

    int *p1 = &MAX1;    //un DEFINE n'est pas en mémoire
    int *p2 = &MAX2;    //impossible d'utiliser un pointeur int sur un const int*

    return 0;
}
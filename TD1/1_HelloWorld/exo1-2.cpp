/*
g++ -c exo1-2.cpp
g++ -o prog exo1-2.cpp
./prog
*/

#include <iostream>
#include <string>

int main()
{
    std::cout << "Quel est votre prénom ?" << "\n";
    std::string nom = "";
    std::cin >> nom;
    std::cout << "Hello " << nom <<std::endl; 

    return 0;
}
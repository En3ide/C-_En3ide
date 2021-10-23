#include <iostream>
#include <cstdlib> /* srand, rand */
#include <ctime>   /* time */
#include <string> // chaines de caracteres
#include <cstdio>  // <cstdio> en C++
// Entrer utilisateur
int main() {
    int nombre_1,saisieChiffre;
    bool ok=true;
    do {
        saisieChiffre=0;
        std::cout<<std::endl<<"saisir le nombre 1 : ";
        std::cin>>nombre_1;
        if(nombre_1>10) {
            std::cout<<"nombre incorrect, veuillez recommencer votre saisie";
            ok = false;
        }
        std::cout<<nombre_1;
    }while(ok==false);
}

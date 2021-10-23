// Vous devez corriger ce programme, arriver à le compiler puis l’exécuter
#include <iostream> // directive de preprocesseur
using namespace std;

int main()

{
cout <<"Le programme marche !" <<endl;
int valeur = 10;
cout << valeur <<endl;
// Attention : la division de deux entiers est une division euclidienne,
// c’est-à-dire une division ***Entière *** !
int quotient = 10/3;
cout << "quotient = " << quotient << endl;
int reste = 10 % 3;
cout << "reste = " << reste << endl;
// Si vous voulez faire une division réelle, il faut convertir un des arguments
// en réel :
cout << "quotient reel = " << valeur/3.0 << endl; // cette fois 3.0 est réel
cout << "Fin du programme ! " << endl;
return 0;
}
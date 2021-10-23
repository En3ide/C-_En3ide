// Vous devez corriger ce programme, arriver à le compiler puis l’exécuter
#include <iostream> // directive de preprocesseur
using namespace std;

int main()
{
int f;
int c;
cout << "saisir la temperatur en c° :" <<endl;
cin >> c;//(20 °C × 9/5) + 32 = 68 °F
f = c - 32;
f = f * 9/5;
cout << "Cela donne :" << f << "°f";
cout <<endl;
cin >> c;
}
#include <iostream>

using namespace std;

int main()
{
    float franc=6.55957;
    float prix;
    cout << "Exercice 1  - Le 15/10/2020" << endl<<endl;
    cout << "Saisir le prix de l'article en Euro : ";
    cin  >> prix;
    cout << "Le prix est de "<<prix<<" Euros ou "<<franc*prix<<" Francs"<<endl;
    return 0;
}

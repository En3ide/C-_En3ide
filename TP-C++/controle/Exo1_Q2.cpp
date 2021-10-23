#include <iostream>

using namespace std;

int main()
{
    cout << "Exercice 2 - - Le 15/10/2020" << endl<<endl;
    float franc=4.33;
    float prix;
    bool saisieInvalide = true;
    do {
    cout << "Saisir le prix de la baguette : " << endl;
    cin  >> prix;
    saisieInvalide = (prix < franc||prix > franc);
    if (prix<franc) {
        cout << "Plus Grand !"<<endl;
    }
    if (prix>franc) {
        cout << "Plus petit !"<<endl;
    }
    }while (saisieInvalide);
    cout << "Vous avez trouve.";
    return 0;
}






/*#include <iostream>

using namespace std;

int main()
{
    float franc=6.55957;
    float prix;
    cout << "Exercice 1 - - Le 15/10/2020" << endl<<endl;
    cout << "Saisir le prix de l'article en Euro : ";
    cin  >> prix;
    cout << "Le prix est de "<<prix<<" Euros ou "<<franc*prix<<" Francs"<<endl;
    return 0;
}
*/

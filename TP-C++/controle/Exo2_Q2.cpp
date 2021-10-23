#include <iostream>
using namespace std;

int main()
{
    cout << "Exercice 2 - - Le 15/10/2020" << endl<<endl;
    int f;
    int c;
    int k;
    int choix;
    bool finProgram = true;
    do {
        choix=0;
        cout <<"choisisser la conversion a effectuer, en tapant le Numero de l action : "<<endl;
        cout <<"1. la conversion de degre Celsius en Kelvin"<<endl;
        cout <<"2. la conversion de Kelvin en degre Fahrenheit"<<endl;
        cout <<"3. la conversion de Celsius en Fahrenheit"<<endl;
        cout <<"4. la fin du programme"<<endl;
        cin  >>choix;
        finProgram = (choix>4);
            if (choix==1) {
                cout << "saisir la temperatur en Celsius :" <<endl;
                cin  >> c;
                k = c + 273,15;
                cout << "La conversion en Kelvin donne : "<< k<<endl;
            }
            if (choix==2) {
                cout << "saisir la temperatur en Kelvin :" <<endl;
                cin  >> k;
                f = k * 1,8;
                f = f - 459,67 ;
                cout << "La conversion en Fahrenheit donne : "<< f<<endl;
            }
            if (choix==3) {
                cout << "saisir la temperatur en Celsius :" <<endl;
                cin  >> c;//(20 �C � 9/5) + 32 = 68 �F
                f = c * (9/5);
                f = f + 32;
                cout << "La conversion en Fahrenheit donne : "<< f<<endl;
            }
            if (choix==4) {
                cout << "Fin du Program" <<endl;
                return 0;
            }
        choix=0;
    }
    while (finProgram);
    return 0;
}
/*#include <iostream>
using namespace std;

int main()
{
    int f;
    int c;
    int k;
    cout << "saisir la temperatur en Celsius :" <<endl;
    cin >> c;//(20 �C � 9/5) + 32 = 68 �F
    k = c + 273,15;
    cout << "La conversion en Kelvin donne : "<< k<<endl;
    f = k * 1,8 - 459,67;
    cout << "La conversion en Fahrenheit donne : "<< f<<endl;
    return 0;
}*/

/*#include <iostream>

using namespace std;

int main()
{
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
*/
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

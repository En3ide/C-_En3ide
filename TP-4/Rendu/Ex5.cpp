//Ex.5-2

#include <iostream>

using namespace std;

int main()
{
    int i=0, r=0, f=1, choixMenu;
    cout <<"Vous allez entrer 10 Entier"<<endl;
    for (; f<11; f++) {
        cout <<"Entre l'entier n°"<<f<<endl;
        cin >>r;
        i=i+r;
    }
    cout <<"Voici la somme de tous les Entiers donne "<<i<<endl;
    do {
        cout <<"La valeur de l'entier est "<<i<<endl;
        cout << "=== Menu ===" << endl<<"1. Ajouter 1"<<endl<<"2. Multiplier par 2"<<endl<<"3. Soustraire 4"<<endl<<"4. Quitter"<<endl<<"Votre choix ?"<<endl;
        cin >>choixMenu;
        switch (choixMenu) {
            case 1:
                cout <<"Tu as choisie Ajouter 1."<<endl;
                i=i+1;
                break;

            case 2:
                cout <<"Tu as choisie Multiplier par 2."<<endl;
                i=i*2;
                break;

            case 3:
                cout <<"Tu as choisie Soustraire 4."<<endl;
                i=i-4;
                break;

            case 4:
                return 0;
        }}
    while (choixMenu<4);
}

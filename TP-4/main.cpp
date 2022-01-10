//Ex.1

/*#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Tape un entier :"<<endl;
    cin >>i;
    if (i>55&&i<79){
        cout <<"Gagner !"<<endl;
    }
    else {
        cout <<"Perdu !"<<endl;
    }
    return 0;
}
*/

//Ex.2

/*
#include <iostream>

using namespace std;

int main()
{
    int choixMenu;
    cout << "=== Menu ===" << endl<<"1. Royal Cheese"<<endl<<"2. Mc Deluxe"<<endl<<"3. Mc Bacon"<<endl<<"4. Big Mac"<<endl<<"Votre choix ?"<<endl;
    cin >>choixMenu;
    switch (choixMenu) {
    case 1:
        cout <<"Tu as choisie un Royal cheese."<<endl;
        break;

    case 2:
        cout <<"Tu as choisie un Mc Deluxe."<<endl;
        break;

    case 3:
        cout <<"Tu as choisie un Mc Bacon."<<endl;
        break;

    case 4:
        cout <<"Tu as choisie un Big Mac."<<endl;
        break;
    }
    return 0;
}
*/

//Ex.3

/*#include <iostream>

using namespace std;

int main()
{
    int i=8;
    for (i; i<24;i++) {
        cout <<i<<endl;
    }
    return 0;
}
*/

//Ex.4

/*#include <iostream>

using namespace std;

int main()
{
    int i=8;
    while (i<24) {
        cout <<i++<<endl;
    }
    return 0;
}*/

//Ex.5

/*
#include <iostream>

using namespace std;

int main()
{
    int i=0, r=0, f=1;
    cout <<"Vous allez entrer 10 Entier"<<endl;
    for (; f<11; f++) {
        cout <<"Entre l'entier n°"<<f<<endl;
        cin >>r;
        i=i+r;
    }
    cout <<"Voici la somme de tous les Entiers donne "<<i;
    return 0;
}
*/

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

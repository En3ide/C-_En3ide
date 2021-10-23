//Ex.2

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

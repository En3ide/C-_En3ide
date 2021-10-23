#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    int i;
    string reponse("oui");
    do {
    cout << "Aimez-vous l informatique (Repondez par oui ou non en minuscule)." <<endl;
    cin >> reponse;
    if (reponse != "oui" && reponse != "non") {
        cout << "Reponse Invalide"<<endl;
    }
    }while (reponse != "oui" && reponse != "non");
    cout << "Merci, pour cette reponse"<<endl;
    return 0;
}

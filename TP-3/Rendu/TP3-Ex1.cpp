#include <iostream>

using namespace std;

int main()
{
    int i=0;
    bool saisieInvalide = true;
    do {
    cout << "Entre un nombre entre 10 et 20." << endl;
    cin >>i;
    saisieInvalide = (i < 10||i > 20);
    if (i<10) {
        cout << "Plus Grand !"<<endl;
    }
    if (i>20) {
        cout << "Plus petit !"<<endl;
    }
    }while (saisieInvalide);
    cout << "OK, c'est bon .";
    return 0;
}
//   Ex1
#include <iostream>
#include <vector>
using namespace std;
void AfficherVector(vector<int> Tableau, int N);
void InitialiserVector(vector<int>& Tableau, int val);
void ModifierVector(vector<int>& Tableau);

int main()
{
    vector<int> Tableau = {2,5,6,7,11,25,10,9};
    int val, N=0, choixTest;
    do {
        cout <<
        "===================="<<endl<<
        "Manipulation d un vector" << endl<<
        "1. Afficher le vector Tab"<<endl<<
        "2. Initialiser le vector Tab"<<endl<<
        "3. Modifier le vector Tab"<<endl<<
        "4. Ajouter un element au vector Tab"<<endl<<
        "5. Supprimer un element au vector Tab"<<endl<<
        "6. Quitter l application"<<endl<<
        "===================="<<endl;
        cout<<"votre choix : ";
        cin >>choixTest;
        switch (choixTest) {
            case 1:
                cout<<"Liste des valeur :";
                AfficheTab(Tableau,N);
                break;
            case 2:
                InitialiseTab(Tableau,N,0);
                break;
            case 3:
                ModifieTab(Tableau,N);
                break;
            case 4:
                return 0;
        }
    }while(N!=1000);
    return 0;
}
void AfficheTab(int Tableau[], int N) {
    cout<<endl;
    for(N=0; N<8; N++) {
        cout<<Tableau[N]<<endl;
    }
}
void InitialiseTab(int Tableau[], int N, int val) {
    for(N=0; N<8; N++) {
        Tableau[N]=val;
    }
}
void ModifieTab(int Tableau[], int N) {
    for(N=0; N<8; N++) {
        cout<<"Modifier la valeurs "<<N+1<<" : ";
        cin>>Tableau[N];
    }
}

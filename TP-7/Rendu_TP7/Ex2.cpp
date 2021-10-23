//      Ex2
#include <iostream>
#include <stdio.h>

using namespace std;
void AfficheTab(float Temp[], int N);
float Moyenne(float t[],float Moyenn, int N);
void Tri_Bulle(float t[], int N);
float Defaut(float t[], int N);
float Mediane(float t[], int N);

int main()
{
    float Temp[10] = {12.5,12.8,9.5,12.9,13,12.7,18.3,12.75,13.0,12.6}, Moyenn;
    int N,choixTest;
    do {
        cout<<endl<<"========================="<<endl<<
        "Manipulation d un tableau" << endl<<
        "1. Afficher le tableau"<<endl<<
        "2. Afficher la valeur Moyenne du tableau"<<endl<<
        "3. Trier le tableau"<<endl<<
        "4. Reaffecter les valeurs par defaut"<<endl<<
        "5. Afficher la Mediane"<<endl<<
        "6. Quitter l application"<<endl<<
        "===================="<<endl;
        cout<<"votre choix : ";
        cin >>choixTest;
        switch (choixTest) {
            case 1://Afficher tableau
                AfficheTab(Temp,N);
                break;
            case 2://Afficher la valeur Moyenne
                Moyenne(Temp,Moyenn,N);
                break;
            case 3://Trier dans l'ordre croissant
                Tri_Bulle(Temp,N);
                break;
            case 4://Rzafecter les valeur par defaut
                //float Temp[10] = {12.5,12.8,9.5,12.9,13,12.7,18.3,12.75,13.0,12.6}
                Defaut(Temp,N);
                break;
            case 5://Donner la valeur Mzdiane
                Mediane(Temp,N);//float Mediane(int t[], int N)
                break;
            case 6://fermer programme
                cout<<endl<<"Fin du programme"<<endl;
                return 0;
                break;
        }
    }while(N!=1000);
    return 0;
}
//case 1
void AfficheTab(float Temp[], int N) {
    cout<<endl<<"Liste des valeur :"<<endl;
    for(N=0; N<10; N++) {
        cout<<Temp[N]<<endl;
    }
}
//case 2
float Moyenne(float Temp[],float Moyenn, int N) {
    N = 0;
    for (N=0;N<10;N++) {
        Moyenn += Temp[N];
    }
    Moyenn =Moyenn/10.0;
    cout<<endl<<"Voici la moyenne des valeur du tableau : "<<Moyenn;
    return Moyenn ;
}
//case 3
void Tri_Bulle(float Temp[], int N) {
    float passage = 0;
    bool permutation = true;
    while ( permutation) {
        permutation = false;
        passage ++;
        for (N=0;N<10-passage;N++) {
            if (Temp[N]>Temp[N+1]){
                permutation = true;
                // on echange les deux elements
                float s = Temp[N];
                Temp[N] = Temp[N+1];
                Temp[N+1] = s;
            }
        }
    }
    cout<<endl<<"Voici la liste trier dans l ordre croissant :"<<endl;
    for(N=0; N<10; N++) {
        cout<<Temp[N]<<endl;
    }
}
//case 4
float Defaut(float Temp[], int N) {
    Temp[0] = 12.5;//float Temp[10] = {12.5,12.8,9.5,12.9,13,12.7,18.3,12.75,13.0,12.6}
    Temp[1] = 12.8;
    Temp[2] = 9.5;
    Temp[3] = 12.9;
    Temp[4] = 13;
    Temp[5] = 12.7;
    Temp[6] = 18.3;
    Temp[7] = 12.75;
    Temp[8] = 13.0;
    Temp[9] = 12.6;
    cout<<endl<< "Les valeurs par defaut du tableau sont reafecter !!!";
    return 0;
}
//case 5
float Mediane(float Temp[], int N) {
    float mediane=0;
    mediane = Temp[5]+Temp[6];
    mediane = mediane/2;
    cout<<endl<<"La valeur mediane est : "<<mediane;
    return mediane;
}

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
	//Algo de tri correction
	/*void tri_à_bulle(int *tab, int const taille) {
		bool rangé=false;
		for(int i=0;i<taille&!rangé;i++) {
			rangé=true;
			for(int j=i;j<taille;j++){
				if(tab[j-1]>tab[j]) {
				std::swap(tab[j],tab[j-1]);
				rangé=false;
				}
			}
		}
	}*/
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
//   Ex1
/*#include <iostream>

using namespace std;
void AfficheTab(int Tableau[], int N);
void InitialiseTab(int Tableau[], int N, int val);
void ModifieTab(int Tableau[], int N);

int main()
{
    int Tableau[8] = {2,5,6,7,11,25,10,9}, val, N=0, choixTest;
    do {
        cout <<"========================="<<endl<<"Manipulation d un tableau" << endl<<"1. Afficher le tableau"<<endl<<"2. Initialiser le tableau"<<endl<<"3. Modifier le tableau"<<endl<<"4. Quitter l application"<<endl<<"===================="<<endl;
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
*/

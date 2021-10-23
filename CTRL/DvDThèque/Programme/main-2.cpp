#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
///////////////////////////////
struct DVD {
    char titre[100];
    char realisateur[100];
    int duree;
    int annee;
    char genre[100];
    };
struct DVDtheque {
    char proprietaire[100];
    char *listeDVD;
    };
/////////////////////////////////
DVD nouveauDVD();
void afficheDVD(DVD d);
void ajoutDVD(DVDtheque& dvdTh);
DVDtheque nouvelleDVDtheque();
void afficheDVDtheque(const DVDtheque &dvdTh);
void afficheReal(DVDtheque dvdTh, char nom);
//////////////////////////////////
int main()
{
            DVD newDVD = nouveauDVD();
            afficheDVD(newDVD);
            DVDtheque newDVDtheque = nouvelleDVDtheque();
            ajoutDVD(newDVDtheque);
            afficheDVDtheque(newDVDtheque);
            //afficheDVDtheque(DVDtheque &dvdTh);
    return 0;
}
DVD nouveauDVD() {
        DVD newDVD;
        cout<<"================================="<<endl
            <<"Quel est le titre du DVD ? : ";
        cin>>newDVD.titre;
        cout<<"Quel est votre realisateur ? : ";
        cin>>newDVD.realisateur;
        cout<<"Donner sa duree : ";
        cin>>newDVD.duree;
        cout<<"En quelle annee est-il sortie ? : ";
        cin>>newDVD.annee;
        cout<<"Donner son genre ? : ";
        cin>>newDVD.genre;
        return newDVD;
}
void ajoutDVD(DVDtheque& dvdTh) {
    DVD d = nouveauDVD();
    cout<<"Quelle est le proprietaire"<<endl;
    cin>>dvdTh.proprietaire;
    char *titre = d.titre;
    dvdTh.listeDVD = titre;
}
void afficheDVD(DVD d) {
    cout<<"Titre : "<<d.titre<<endl
        <<"Realisateur : "<<d.realisateur<<endl
        <<"Duree : "<<d.duree<<endl
        <<"Anne de sortie : "<<d.annee<<endl
        <<"Genre : "<<d.genre<<endl;
}
DVDtheque nouvelleDVDtheque() {
    DVDtheque newDVDtheque;
    cout<<"A qui appartient la nouvelle DVDtheque : "<<endl;
    cin>>newDVDtheque.proprietaire;
    return newDVDtheque;
}
void afficheDVDtheque(const DVDtheque &dvdTh) {
    cout<<"Les titre qui sont present dans la DVDtheque sont : "<<dvdTh.listeDVD<<endl;
}
//void afficheReal(DVDtheque dvdTh, string dvd) {}

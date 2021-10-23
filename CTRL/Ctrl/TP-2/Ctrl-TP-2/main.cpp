#include <iostream>
#include <cstdlib> /* srand, rand */
#include <ctime>   /* time */
#include <string> // chaines de caracteres
#include <cstdio>  // <cstdio> en C++

using namespace std;
// Entrer utilisateur
int saisirChiffre() {
    int saisieChiffre,nombre_1,nombre_2,nombre_3,nombre_4;
    do {
        cout<<endl<<"saisir le nombre 1 : ";
        cin>>nombre_1;
        cout<<endl<<"saisir le nombre 2 : ";
        cin>>nombre_2;
        cout<<endl<<"saisir le nombre 3 : ";
        cin>>nombre_3;
        cout<<endl<<"saisir le nombre 4 : ";
        cin>>nombre_4;
        if((nombre_1>10)|(nombre_2>10)|(nombre_3>10)|(nombre_4>10)) {
            cout<<"nombre incorrect, veuillez recommencer votre saisie";
            saisieChiffre = 1;
        }
    }while(saisieChiffre==1);
}
// attendre un maxTime millisecondes
void msleep(unsigned int maxTime) {
    struct timespec req;
    struct timespec rem;
    time_t secondes = 0;
    long nanoSecondes = 0;
    if (maxTime >= 1000) {
        do {
            secondes++;
            maxTime -= 1000;
        }while (maxTime >= 1000);
    }
    nanoSecondes = maxTime * 1000000;
    req.tv_sec = secondes;
    req.tv_nsec = nanoSecondes;
    //nanosleep(&req, &rem);
}
/**
 *
 * @param maxAlea valeur max de l'aleatoire
 * @return retourne une valeur entiere E[0..maxAlea[
 */
unsigned int aleatoire(unsigned int maxAlea) {
    struct timeb t;
    float a, b;
    unsigned int nbmilli;
    ftime(&t);
    nbmilli = t.time * 1000 + t.millitm;
    srand(nbmilli);
    a = rand();
    b = (maxAlea * a) / RAND_MAX;
    msleep(250);
    return ( (unsigned int) b);
}

int main() {
    int nombre_1=0,nombre_2=0,nombre_3=0,nombre_4=0;
    string pseudo;
    cout << "MinorMind !!" << endl;
    cout << "une valeur aleatoire " << aleatoire(5) << endl;
    cout << "une autre valeur aleatoire " << aleatoire(10)<< endl;
    return 0;
}

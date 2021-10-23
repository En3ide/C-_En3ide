#include <iostream>
#include <iomanip>
int tick(int iS);
int saisir_heure(int &iH,int &iM,int &iS);
void affiche_heure(int iHeures,int iMinutes,int iSecondes);
int main() {
    int iHeures, iMinutes, iSecondes, iH, iM, iS;
    saisir_heure(iHeures, iMinutes, iSecondes);
    affiche_heure(iHeures, iMinutes, iSecondes);
    return 0;
}
void affiche_heure(int iHeures,int iMinutes,int iSecondes)
{
    if (iSecondes>60) {
        iSecondes=0;}
    if (iMinutes>60) {
        iMinutes=0;}
    if (iHeures>24) {
        iHeures=0;}
    std::cout <<"Il est "<< std::setw(2) << std::setfill('0') <<iHeures<< " Heure(s), " << std::setw(2) << std::setfill('0') <<iMinutes<<" Minute(s), "<< std::setw(2) << std::setfill('0') <<iSecondes<<" Seconde(s)"<<
    std::endl;
}
int saisir_heure(int &iH,int &iM,int &iS)
{
    std::cout <<"Saisir Heures :";
    std::cin >>iH;
    std::cout <<"Saisir Minutes :";
    std::cin >>iM;
    std::cout <<"Saisir Secondes :";
    std::cin >>iS;
    return iH, iM, iS;
}
int tick(int iS)
{
    iS =iS+1;
    return iS;
}
/*#include <iostream>
using namespace std;
int crypter(int a,int b,int c,int d,int e,int f);
int decrypter(int h,int b,int c,int d,int e,int f);
void AfficheMenu(int r);
int main() {
    int a,b,c,d,e,f,r,h;
    AfficheMenu(r);
    cin >>r;
    if (r==1) {
        cout <<"Entrer la valeur a crypter : "<<endl;
        cin >>a;
        a = crypter(a,b,c,d,e,f);
        cout <<"Resulta du cryptage : "<<a<<endl;}
    if (r==2) {
        cout <<"Entrer la valeur a decrypter : ";
        cin >>h;
        h = decrypter(h,b,c,d,e,f);
        cout <<"Resulta du decryptage : "<<h<<endl;}
    else {
        return 0;}
    return 0;}
void AfficheMenu(int r) {
    cout <<"Veuiller choisir l action a effectuer :"<<endl<<"1.Crypter"<<endl<<"2.Décrypter"<<endl<<"Entrer une autre valeur pour fermer le programme"<<endl;}
int crypter(int a,int b,int c,int d,int e,int f) {
    b =(a%10000)/1000;
    c =(a%1000)/100;
    d =(a%100)/10;
    e =a%10;
    //-----1er et 2ème
    f =b;
    b =d;
    d =f;
    //-----2ème et 4ème
    f =c;
    c =e;
    e =f;
    //-----Afficher le nombre crypté
    b =b*1000;
    c =c*100;
    d =d*10;
    a =b+c+d+e;
    return a;}
int decrypter(int h,int b,int c,int d,int e,int f) {
    b =(h%10000)/1000;
    c =(h%1000)/100;
    d =(h%100)/10;
    e =h%10;
    //-----1er et 2ème
    f =d;
    d =b;
    b =f;
    //-----2ème et 4ème
    f =e;
    e =c;
    c =f;
    //-----Afficher le nombre crypté
    b =b*1000;
    c =c*100;
    d =d*10;
    h =b+c+d+e;
    return h;}*/
/*
#include <iostream>

using namespace std;
float FarenheitToCelsius(float f);
float CelsiusToFarenheit(float c);
void AfficheMenu(int r);
int main()
{
    int f,c,r;
    AfficheMenu(r);
    cin >>r;
    if (r==2) {
        cout <<"Entrer une valeur en Farenheit : ";
        cin >>c;
        c = FarenheitToCelsius(c);
        cout <<endl<<"Voici le resulta en Celcius : "<<c<<endl;
    }
    if (r==1) {
        cout <<"Entrer une valeur en Celcius : ";
        cin >>f;
        f = CelsiusToFarenheit(f);
        cout <<endl<<"Voici le resulta en Farenheit : "<<f<<endl;
    }
    else {
            cout <<r;
        return 0;
    }
    return 0;
}
void AfficheMenu(int r)
{
    cout <<"Veuiller choisir l unité :"<<endl<<"1.Celcius"<<endl<<"2.Farenheit"<<endl<<"Entrer une autre valeur pour fermer le programme"<<endl;
}
float FarenheitToCelsius(float f)
{
    //(32 °F − 32) × 5/9 = 0 °C
    f = (f-32.0)*5.0/9.0;
    return f;
}
float CelsiusToFarenheit(float c)
    {
    //(20 °C × 9/5) + 32 = 68 °F
    c = (c*9.0)/5 +32;
    return c;
}*/

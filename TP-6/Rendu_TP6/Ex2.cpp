#include <iostream>
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
    return h;}

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cout <<"Entrer un entier de 0 a 4 chiffres"<<endl;
    cin >>a;
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
    cout <<"Resulta crypte : "<<a<<endl;
    cout <<"Maintenant decryptont !!"<<endl<<"Appuye sur entrer :"<<endl;
    b =(a%10000)/1000;
    c =(a%1000)/100;
    d =(a%100)/10;
    e =a%10;
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
    a =b+c+d+e;
    cout <<"Resulta du decryptage : "<<a<<endl;
    return 0;
}
/*
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, d, r1, r2;
    cout <<"Equation du segond degre ax^2 + bx + c"<<endl;
    cout << "Entrer la valeur A : ";
    cin >>a;
    cout << "Entrer la valeur B : ";
    cin >>b;
    cout << "Entrer la valeur c : ";
    cin >>c;
    d =b*b-(4*a*c);
    cout <<"Delta = "<<d<<endl;
    if (d<0) {
        cout << "Delta est plus petit que 0, Donc aucune racine reelle." <<endl;
    }
    if (d==0) {
        cout << "Delta est egal a 0, donc 1 racine reelle." <<endl<< "x=(-b)/(2*a)" ;
        r1 =(-b)/(2*a);
        cout <<r1<<endl;
    }
    if (d>0) {
        cout << "Delta est plus grand que 0, Donc 2 racines reelles." <<endl;
        r2 =(-b-sqrt(d))/(2*a);
        cout << "Racine 2 : "<<r2<<endl;
    }
    return 0;
}*/

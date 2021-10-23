#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;

size_t getPtrSize( char *ptr ) {
   return sizeof( ptr );
}

int main()
{
    int N,j,t,a;
    string chaine1= "Bonjour";
    string chaine2= "bonjour";
    string chaine3= "les SNIR1";
    string chaine4;
    string mot;
    string maj= "MAJUSCULE";
    string s= " ";
    //Ex1
    cout<<"Ex 1 : ";
    printf("Voici la chaine de caractere l aide de la fonction printf : %s \n",chaine1);
    cout<<"Voici la chaine de caractère l aide de la fonction cout : "<<chaine1<<endl;
    //Ex2
    cout<<endl<<"Ex 2 : ";
    cout<<"Taille de la chaine1 : "<<chaine1.length()<<endl;
    //Ex3
    cout<<endl<<"Ex 3 : ";
    printf("Voici le caractere ascii du 2eme caractere de la chaine 2 : %d",chaine2[1]);
    //Ex4
    cout<<endl<<"Ex 4 : ";
    scanf("%19s",chaine4);
    for(N=0; N<chaine4.length(); N++) {
        printf("%c",chaine4[N]," ");
    }
    //EX5
    cout<<endl<<"Ex 5 : ";
    if(chaine1.compare(chaine2) != 0){
        cout<<endl<<"Les chaine1 et chaine2 sont identique";
    }
    //EX6
    cout<<endl<<"Ex 6 : ";
    chaine4 =chaine1+chaine4;
    cout<<endl<<chaine4<<endl;
    //EX7
    cout<<endl<<"Ex 7 : ";
    cin>>mot;
    cout<<"Il y a "<<chaine4.length()<<" Lettres dans ta saisie."<<endl;
    //EX8
    cout<<endl<<"Ex 8 : ";
    cin>>mot;
    j = 0;
    t = maj.length();
    s[t] = '\0';
    for (N = t - 1; N >= 0; N--) {
      s[j++] = mot[N];
    }
    s[N] = '\0';
    cout<<s;
    //Ex9
    cout<<endl<<"Ex 9 : ";
    for(N = 0; N<maj.length(); N++) {
        a+=maj[N];
        a+=32;
        maj[N]+=32;
    }
    cout<<maj;
    return 0;
}

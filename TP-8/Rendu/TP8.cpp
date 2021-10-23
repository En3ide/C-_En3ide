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
    char chaine1[8] = "Bonjour";
    char chaine2[8] = "bonjour";
    char chaine3[10] = "les SNIR1";
    char chaine4[20] = " ";
    char mot[255];
    char maj[20] = "MAJUSCULE";
    char s[255] = " ";
    //Ex1
    cout<<"Ex 1 : ";
    printf("Voici la chaine de caractère chaine1à l'aide de la fonction printf : %s\n",chaine1);
    cout<<"Voici la chaine de caractère chaine1à l'aide de la fonction cout : "<<chaine1<<endl;
    //Ex2
    cout<<endl<<"Ex 2 : ";
    cout<<"Taille de la chaine1 : "<<sizeof chaine1 <<endl;
    //Ex3
    cout<<endl<<"Ex 3 : ";
    printf("Voici le caractère ascii du 2eme caractère de la chaine 2 : %d",chaine2[1]);
    //Ex4
    cout<<endl<<"Ex 4 : ";
    scanf("%19s",chaine4);
    for(N=0; N<strlen(chaine4); N++) {
        printf("%c ",chaine4[N]);
    }
    //EX5
    cout<<endl<<"Ex 5 : ";
    if(strcmp (chaine1,chaine2) != 0){
        cout<<endl<<"Les chaine1 et chaine2 sont identique";
    }
    //EX6
    cout<<endl<<"Ex 6 : ";
    strcpy(chaine4,chaine1);
    strcat(chaine4,chaine3);
    cout<<endl<<chaine4<<endl;
    //EX7
    cout<<endl<<"Ex 7 : ";
    cin>>mot;
    cout<<"Il y a "<<strlen(mot)<<" Lettres dans ta saisie."<<endl;
    //EX8
    cout<<endl<<"Ex 8 : ";
    cin>>mot;
    j = 0;
    t = strlen(mot);
    s[t] = '\0';
    for (N = t - 1; N >= 0; N--) {
      s[j++] = mot[N];
    }
    s[N] = '\0';
    cout<<s;
    //Ex9
    cout<<endl<<"Ex 9 : ";
    for(N = 0; N<strlen(maj); N++) {
        a+=maj[N];
        a+=32;
        maj[N]+=32;
    }
    cout<<maj;
    return 0;
}

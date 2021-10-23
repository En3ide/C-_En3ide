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
}
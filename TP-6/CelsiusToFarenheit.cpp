
#include <iostream> // directive de preprocesseur
using namespace std;

int main()
{
int f;
int c;
cout << "saisir la temperatur en f :" <<endl;
cin >> f;//(32 °F − 32) × 5/9 = 0 °C
c = f - 32;
c = c * 5/9;
cout << "Cela donne :" << c << "°c";
cout << "saisir la temperatur en f :" <<endl;
cin >> f;//(32 °F − 32) × 5/9 = 0 °C
c = f - 32;
c = c * 5/9;
cout << "Cela donne :" << c << "°c";
cout <<endl;
return 0;
}
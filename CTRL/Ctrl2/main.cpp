#include <iostream>


#include <cstdlib> /* srand, rand */
#include <ctime>   /* time */
#include <string> // chaines de caracteres
#include <cstdio>  // <cstdio> en C++

using namespace std;


// attendre un maxTime millisecondes

void msleep(unsigned int maxTime)
{
    struct timespec req;
    struct timespec rem;
    time_t secondes = 0;
    long nanoSecondes = 0;
    if (maxTime >= 1000)
    {
        do
        {
            secondes++;
            maxTime -= 1000;
        }
        while (maxTime >= 1000);
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
unsigned int aleatoire(unsigned int maxAlea)
{
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





int main()
{
    string pseudo;

    cout << "MinorMind !!" << endl;

    cout << "une valeur aleatoire " << aleatoire(5) << endl;
    cout << "une autre valeur aleatoire " << aleatoire(10)<< endl;


    return 0;
}

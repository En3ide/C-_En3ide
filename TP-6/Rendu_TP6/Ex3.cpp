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
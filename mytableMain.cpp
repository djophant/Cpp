#include "mytable.h"
#include <iostream>

using namespace std;


int main()
{
    MonTableau *tab1 = new MonTableau();
    tab1->append(2);
    tab1->append(2);
    tab1->append(2);
    tab1->append(2);
    tab1->afficher();
    tab1->inserer(1, 3);
    tab1->supprimer(2);
    tab1->afficher();

    MonTableau *tab2 = new MonTableau(*tab1);
    tab2->append(3);
    tab2->afficher();



    cout << "taille de tab1 : " << tab1->getTaille()<< endl;

    return 0;

}
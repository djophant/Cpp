#include "vehicule.h"
#include <iostream>
using namespace std;


int main()
{
    // class instances 
    CVehicule vehicule;
    CVoiture voiture;
    CMoto moto;
    
    // class method afficher 
    /*
    vehicule.afficher();
    voiture.afficher();
    moto.afficher();
    */

    // question 3
 
    CVehicule **tab; 
    tab = new CVehicule*[3];
    tab[0] = &vehicule;
    tab[1] = &voiture;
    tab[2] = &moto;

    
    for(int i=0; i<3; i++)
    {
        tab[i]->afficher();
    }

    for(int i=0; i<3; i++)
    {
        delete[] tab[i];
    }

    delete []tab;
    
    return 0; 
}
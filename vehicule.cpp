#include <iostream>
#include "vehicule.h"
using namespace std;

// car class 

CVehicule::CVehicule()
{
}

CVehicule::~CVehicule()
{
    cout << "destruction classe CVehicule\n";
}

void CVehicule::afficher()
{
    cout << "classe vehicule" << endl;
}


// motorcycle class 

CMoto::CMoto()
{
}

CMoto::~CMoto()
{
    cout << "destruction classe CMoto\n";
}

void CMoto::afficher()
{
    cout << "classe moto" << endl;
}

// Car class 

CVoiture::CVoiture()
{
}

CVoiture::~CVoiture()
{
    cout << "destruction classe CVoiture\n";
}

void CVoiture::afficher()
{
    cout << "classe voiture" << endl;
}
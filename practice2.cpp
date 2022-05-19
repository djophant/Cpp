#include <iostream>
#include <cmath>
#include "practice2.h"
using namespace std;

MyVecteur::MyVecteur(MyPoint p1, MyPoint p2)
{
    mOrigine.setX(p1.getX());
    mOrigine.setY(p1.getY());
    mDestination.setX(p2.getX());
    mDestination.setY(p2.getY());
}

MyVecteur::MyVecteur(int xo, int yo, int xd, int yd)
{
    mOrigine.setX(xo);
    mOrigine.setY(yo);
    mDestination.setX(xd);
    mDestination.setY(yd);
}

void MyVecteur::afficher()
{
    cout << "coordonnees de l'origine mX: " << mOrigine.getX()
         << " mY: " << mOrigine.getY() << endl;
    cout << "coordonnees de la destination mX: " << mDestination.getX()
         << " mY: " << mDestination.getY() << endl;
}

float MyVecteur::longueur()
{
    int xA, xB, yA, yB; 
    xA = mOrigine.getX();
    xB = mOrigine.getX();
    yA = mDestination.getX();
    yB = mDestination.getX();
    float length;
    length = sqrt(pow((xB - xA), 2) + pow((yB - yA), 2)) + M_PI;

    return length;
}

float MyVecteur::angle(MyVecteur v1, MyVecteur v2)
{
    
    return 0;
}
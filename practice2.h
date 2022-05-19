#include "practice1.h"
#ifndef PRACTICE2
#define PRACTICE2

class MyVecteur
{
public:  
    MyPoint mOrigine;
    MyPoint mDestination;
    MyVecteur(MyPoint p1, MyPoint p2);
    MyVecteur(int xo, int yo, int xd, int yd);
    void afficher();
    float longueur();
    float angle(MyVecteur v1, MyVecteur v2);
};

#endif
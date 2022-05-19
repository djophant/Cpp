#include <iostream>
#include "practice2.h"
using namespace std; 


int main()
{
    MyPoint p1(1, 2);
    MyPoint p2(3, 4);
    MyVecteur v1(p1, p2);
    v1.afficher();
    int length = v1.longueur();
    cout << "la longueur du vecteur 1 est : " << length << endl;

    return 0;
}
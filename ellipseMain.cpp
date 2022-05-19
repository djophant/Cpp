#include <iostream> 
#include "ellipse.hpp"
using namespace std; 


int main()
{
    Ellipse e;
    Ellipse e1(1, 2, 3, 4);
    e.afficher();
    e1.afficher();



    return 0;
}
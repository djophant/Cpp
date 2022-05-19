#include <iostream>
#include <stdlib.h>
#include "ellipse.hpp"

Ellipse::Ellipse()
{
    mX = 0; 
    mY = 0; 
    mA = 0; 
    mB = 0;
}
Ellipse::Ellipse(int x, int y, int a, int b)
{
    mX = x; 
    mY = y; 
    mA = a; 
    mB = b;
}
void Ellipse::afficher()
{
    printf("mX: %d mY: %d mA: %d mB: %d", mX, mY, mA, mB);
}
void Ellipse::deplacer(int dx, int dy)
{
    mX += dx; 
    mY += dy;
}
void Ellipse::setX(int x)
{
    mX = x;
}
void Ellipse::setY(int y)
{
    mY = y;
}

int Ellipse::getX()
{
    return mX;
}
int Ellipse::getY()
{
    return mY;
}
#include <iostream>
#include "practice1.h"
using namespace std;

MyPoint::MyPoint()
{
    mX = 0;
    mY = 0;
}

MyPoint::MyPoint(int x, int y)
{
    mX = x; 
    mY = y;
}

MyPoint::MyPoint(const MyPoint & p)
{
    mX = p.mX;
    mY = p.mY;
}


int MyPoint::getX()
{
    return mX;
}

int MyPoint::getY()
{
    return mY;
}

void MyPoint::setX(int x)
{
    mX = x;
}

void MyPoint::setY(int y)
{
    mY = y;
}

void MyPoint::afficher() const
{
    cout << "mx: " << mX << " mY: " << mY << endl;
}

void MyPoint::saisieConsole(int x, int y) 
{
    cin >> x;
    mX = x;
    cin >> y;
    mY = y;
}

MyPoint::~MyPoint()
{
    cout << "end of the class\n";
}
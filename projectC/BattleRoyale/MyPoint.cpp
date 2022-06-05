#include "MyPoint.h"
MyPoint::MyPoint(int x, int y)
{
	mX = x;
	mY = y;
}

MyPoint::MyPoint(const MyPoint& pCopie)
{
	mX = pCopie.mX;
	mY = pCopie.mY;
}

MyPoint MyPoint::operator+(const MyPoint p) const
{
	MyPoint pResult(mX + p.getX(), mY + p.getY());
	return pResult;
}

bool MyPoint::operator==(const MyPoint p) const
{
	if (mX != p.mX)
		return false;
	if (mY != p.mY)
		return false;
	return true;
}

MyPoint::~MyPoint()
{
}
int MyPoint::getX() const
{
	return mX;
}
int MyPoint::getY() const
{
	return mY;
}
void MyPoint::afficher() const
{
	cout << "x:" << mX << " y:" << mY << endl;
}
void MyPoint::SaisieConsole()
{
	cout << "Saisir x et y svp:" << endl;
	cin >> mX >> mY;
}
void MyPoint::setX(int x)
{
	mX = x;
}
void MyPoint::setY(int y)
{
	mY = y;
}

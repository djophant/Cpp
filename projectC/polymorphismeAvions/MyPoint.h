#pragma once
#include <iostream>
using namespace std;

class MyPoint
{
public:
	MyPoint(int x = 0, int y = 0);
	MyPoint(const MyPoint& pCopie);
	~MyPoint();

	void afficher() const;
	void SaisieConsole();
	//accesseurs
	void setX(int x);
	void setY(int y);
	int getX() const;
	int getY() const;

	bool isNear(const MyPoint p, int precision = 0)const;

	MyPoint operator+(const MyPoint p) const;
	bool operator==(const MyPoint p) const;
protected:
	int mX;
	int mY;

};


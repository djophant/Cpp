#pragma once
#include "Damier.h"
#include <string>
using namespace std;
class Damier;

class Fantassin
{
public:
	Fantassin(Damier* dam);
	int getRayonDeplacement() { return mRayonDeplacement; }
	int getVie() { return mVie; }
	string getType() { return mType; }
	int getRayonAttaque() {return mRayonAttaque;}
	void deplacer();
	virtual void attaquer();
	virtual void infligerDegat(int attaque, string type);

protected:
	Damier* mDamier;
	string mType;
	int mVie;
	int mAttaque;
	int mRayonDeplacement;
	int mRayonAttaque;
};


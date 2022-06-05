#include "Fantassin.h"


Fantassin::Fantassin(Damier* dam)
{
	mDamier = dam;
	mType = "Fantassin";
	mRayonDeplacement = 2;
	mVie = 100;
	mAttaque = 100;
	mRayonAttaque = 2;
}

void Fantassin::deplacer()
{
	mDamier->deplacerPerso(this);//0x123456
}

void Fantassin::attaquer()
{
	vector<Fantassin*> tmp = mDamier->getPersosCible(this);
	if (tmp.size() > 0)
		tmp[0]->infligerDegat(mAttaque, mType);
}

void Fantassin::infligerDegat(int attaque, string type)
{
	mVie = mVie - attaque;
}
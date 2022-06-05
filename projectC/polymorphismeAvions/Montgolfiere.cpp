#include "Montgolfiere.h"


Montgolfiere::Montgolfiere(int largeur, int longueur):ObjetVolant(largeur,longueur)
{
	//mType = "Montgolfiere";
}


void Montgolfiere::updatepos()
{
	int x = mCoords.getX();
	int y = mCoords.getY();

	int minLargeur = x - 2;
	if (minLargeur < 0) minLargeur = 0;
	int maxLargeur = x + 2;
	if (maxLargeur >= mLargeurCiel) maxLargeur = mLargeurCiel-1;

	int minLongueur = y - 2;
	if (minLongueur < 0) minLongueur = 0;
	int maxLongueur = y + 2;
	if (maxLongueur >= mLongueurCiel) maxLongueur = mLongueurCiel - 1;

	mCoords.setX(myRand(minLargeur, maxLargeur));
	mCoords.setY(myRand(minLongueur, maxLongueur));
}
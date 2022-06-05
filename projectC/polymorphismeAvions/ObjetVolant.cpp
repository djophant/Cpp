#include "ObjetVolant.h"

int ObjetVolant::mCptObjets = 0;

ObjetVolant::ObjetVolant(int largeurCiel, int longueurCiel)
{
	mCptObjets++;
	mID = mCptObjets;
	mType = "Objet volant";
	mLargeurCiel = largeurCiel;
	mLongueurCiel = longueurCiel;
}
void ObjetVolant::updatepos()
{
	mCoords.setX(myRand(0, mLargeurCiel - 1));
	mCoords.setY(myRand(0, mLongueurCiel - 1));
}
void ObjetVolant::displayStatus()
{
	cout << "ID:" << mID << " Type:" << mType << " Coords";
	mCoords.afficher();
}

MyPoint ObjetVolant::getPosition()
{
	return mCoords;
}
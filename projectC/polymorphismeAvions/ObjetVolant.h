#pragma once
#include "MyPoint.h"
#include <string>
#include "Tools.h"

using namespace std;

class ObjetVolant
{

public:
	ObjetVolant(int largeurCiel, int longueurCiel);	
	virtual void updatepos();
	virtual void displayStatus();
	MyPoint getPosition();

protected:
	static int mCptObjets;
	int mID;
	string mType;
	MyPoint mCoords;
	int mLargeurCiel;
	int mLongueurCiel;
};


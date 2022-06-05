#pragma once
#include "Fantassin.h"
#include <vector>
#include "MyPoint.h"
#include "Tools.h"
using namespace std;

class Fantassin;

class Damier
{
public:
	Damier(int l, int h);
	bool setRandomPerso(Fantassin* p);
	int getLargeurGrille() { return mLargeur; }
	int getHauteurGrille() { return mHauteur; }
	int persosCount();
	void afficher();
	MyPoint getPosition(Fantassin* p);
	Fantassin* getPersonnage(MyPoint p);
	bool deplacerPerso(Fantassin*);

	vector<Fantassin*> getPersosCible(Fantassin*);	
	void takeDeadPerso();
	

private:
	vector<vector<Fantassin*>> mGrille;
	int mLargeur;
	int mHauteur;
};


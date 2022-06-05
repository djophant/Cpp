#include "Damier.h"

Damier::Damier(int l, int h)
{
	mLargeur = l;
	mHauteur = h;

	//init à NULL de toutes les cases de la grille
	vector<Fantassin*> tmp;
	tmp.resize(l, NULL);
	mGrille.resize(h, tmp);
}

bool Damier::setRandomPerso(Fantassin* f)
{
	//verifier avec persosCount() si des cases sont libres
	while (true)
	{
		int x = myRand(0, mLargeur - 1);
		int y = myRand(0, mHauteur - 1);

		if (mGrille[x][y] == NULL)
		{
			mGrille[x][y] = f;
			return true;
		}
	}
}

Fantassin* Damier::getPersonnage(MyPoint p)
{
	return mGrille[p.getX()][p.getY()];
}

int Damier::persosCount()
{
	int cpt = 0;
	for (int j = 0; j < mLargeur; j++)
	{
		for (int i = 0; i < mHauteur; i++)
		{
			if (mGrille[i][j] != NULL)
				cpt++;
		}
	}
	return cpt;
}

void Damier::afficher()
{
	int i, j;

	for (i = 0; i < mLargeur; i++)
	{
		for (j = 0; j < mHauteur; j++)
		{
			if (mGrille[i][j] == NULL)
			{
				cout << ".";// << endl;
			}
			else
			{
				cout << mGrille[i][j]->getType()[0];
			}
		}
		cout << endl;
	}
}

MyPoint Damier::getPosition(Fantassin* p)
{
	for (int j = 0; j < mLargeur; j++)
	{
		for (int i = 0; i < mHauteur; i++)
		{
			if (mGrille[j][i] == p)
				return MyPoint(j, i);
		}
	}
	return MyPoint(-1, -1);
}

bool Damier::deplacerPerso(Fantassin* f)//0x123456
{
	MyPoint currentPos = getPosition(f); // this->getPosition(f);

	int xmax, xmin, ymax, ymin;
	int rayon = f->getRayonDeplacement();

	xmin = currentPos.getX() - rayon;
	xmax = currentPos.getX() + rayon;
	ymin = currentPos.getY() - rayon;
	ymax = currentPos.getY() + rayon;

	xmin = max(0, xmin);
	ymin = max(0, ymin);
	xmax = min(xmax, mLargeur - 1);
	ymax = min(ymax, mHauteur - 1);

	vector<MyPoint> deplacementsPossibles;
	for (int i = xmin; i <= xmax; i++)
	{
		for (int j = ymin; j <= ymax; j++)
		{
			if (mGrille[i][j] == NULL)
				deplacementsPossibles.push_back(MyPoint(i, j));
		}
	}
	if (deplacementsPossibles.size() == 0)
		return false;

	int hasard = myRand(0, deplacementsPossibles.size() - 1);
	MyPoint pointHasard = deplacementsPossibles[hasard];

	mGrille[pointHasard.getX()][pointHasard.getY()] = f;
	mGrille[currentPos.getX()][currentPos.getY()] = NULL;

	return true;

}

vector<Fantassin*> Damier::getPersosCible(Fantassin* f)
{
	MyPoint currentPos = getPosition(f);

	int xmax, xmin, ymax, ymin;
	int rayon = f->getRayonAttaque();

	xmin = currentPos.getX() - rayon;
	xmax = currentPos.getX() + rayon;
	ymin = currentPos.getY() - rayon;
	ymax = currentPos.getY() + rayon;

	if (xmin < 0) xmin = 0;
	if (ymin < 0) ymin = 0;
	if (xmax >= mLargeur) xmax = mLargeur - 1;
	if (ymax >= mHauteur) ymax = mHauteur - 1;

	vector<Fantassin*> persosCibles;
	for (int i = xmin; i <= xmax; i++)
	{
		for (int j = ymin; j <= ymax; j++)
		{
			if (mGrille[i][j] != NULL && mGrille[i][j] != f)
				persosCibles.push_back(mGrille[i][j]);
		}
	}
	return persosCibles;
}

void Damier::takeDeadPerso()
{
	for (int j = 0; j < mLargeur; j++)
	{
		for (int i = 0; i < mHauteur; i++)
		{
			if (mGrille[i][j] != NULL && mGrille[i][j]->getVie() <= 0)
				mGrille[i][j] = NULL;
		}
	}
}
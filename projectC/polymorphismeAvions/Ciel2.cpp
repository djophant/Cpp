#include "Ciel2.h"

Ciel2::Ciel2()
{
	for (int i = 0; i < LARGEUR; i++) 
	{
		for (int j = 0; j < LONGUEUR; j++)
		{
			mTab[i][j] = NULL;
		}
	}
}

bool Ciel2::setobjetVolant(ObjetVolant* o)
{
	int x = o->getPosition().getX();
	int y = o->getPosition().getY();

	if (mTab[x][y] != NULL)
		return false;

	for (int i = 0; i < LARGEUR; i++)
	{
		for (int j = 0; j < LONGUEUR; j++)
		{
			if (mTab[i][j] == o)
			{
				mTab[i][j] = NULL;
				mTab[x][y] = o;
				return true;
			}
		}
	}
	mTab[x][y] = o;
	return true;
}


void Ciel2::display()
{
	for (int i = 0; i < LARGEUR; i++)
	{
		for (int j = 0; j < LONGUEUR; j++)
		{
			if (mTab[i][j] != NULL)
			{
				mTab[i][j]->displayStatus();
			}
		}
	}
}

ObjetVolant* Ciel2::getObjetvolant(int x, int y)
{
	//check des bornes à faire
	return mTab[x][y];
}

void Ciel2::clear()
{
	for (int i = 0; i < LARGEUR; i++)
	{
		for (int j = 0; j < LONGUEUR; j++)
		{
			if (mTab[i][j] != NULL)
			{
				delete mTab[i][j];
			}
		}
	}

}
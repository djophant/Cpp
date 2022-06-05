#include "Ciel.h"

Ciel::Ciel()
{

}

void Ciel::addObjetVolant(ObjetVolant* o)
{
	if (find(mObjetsVolants.begin(), mObjetsVolants.end(), o) == mObjetsVolants.end())
	{
		mObjetsVolants.push_back(o);
	}
}

vector<ObjetVolant*> Ciel::collisions()
{
	vector<ObjetVolant*> tmp;
	for (int i = 0; i < mObjetsVolants.size(); i++)
	{
		for (int j = i + 1; j < mObjetsVolants.size(); j++)
		{
			if (mObjetsVolants[i]->getPosition() == mObjetsVolants[j]->getPosition())
			{
				//collision
				tmp.push_back(mObjetsVolants[i]);
				tmp.push_back(mObjetsVolants[j]);
			}
		}
	}
	return tmp;
}

void Ciel::display()
{
	for (int i = 0; i < mObjetsVolants.size(); i++)
	{
		mObjetsVolants[i]->displayStatus();
	}
}

vector<ObjetVolant*> Ciel::objetsVolants()
{
	return mObjetsVolants;
}
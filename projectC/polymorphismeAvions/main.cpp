#include "ObjetVolant.h"
#include "Ciel.h"
#include "Ciel2.h"
#include "Montgolfiere.h"

int main()
{
	
	Ciel* ciel = new Ciel();

	for (int i = 0; i < 10; i++)
	{
		ObjetVolant* o = new ObjetVolant(10, 10);
		ciel->addObjetVolant(o);
	}

	vector< ObjetVolant*> objets = ciel->objetsVolants();

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < objets.size(); j++)
		{
			objets[j]->updatepos();
		}

		cout << endl << endl;
		ciel->display();
	}
	
	for (int j = 0; j < objets.size(); j++)
	{
		delete objets[j];
	}

	delete ciel;	
	*/

	Ciel2* ciel2 = new Ciel2();
	for (int i = 0; i < 5; i++)
	{
		ObjetVolant* o = new ObjetVolant(10, 10);
		ciel2->setobjetVolant(o);
	}

	for (int i = 0; i < 5; i++)
	{
		Montgolfiere* o = new Montgolfiere(10, 10);
		ciel2->setobjetVolant(o);
	}

	for (int z = 0; z < 50; z++)
	{
		for (int i = 0; i < LARGEUR; i++)
		{
			for (int j = 0; j < LONGUEUR; j++)
			{
				ObjetVolant* o = ciel2->getObjetvolant(i, j);
				if (o != NULL)
				{
					o->updatepos();
					if (ciel2->setobjetVolant(o) == false)
					{
						cout << "collision :" << endl;
						o->displayStatus();
						return 0;
					}
				}
			}
		}
	}
	cout << "pas de collision :" << endl;

	ciel2->clear();
	delete ciel2;

	return 0;
}
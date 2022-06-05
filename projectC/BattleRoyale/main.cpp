#include <vector>
#include "Damier.h"
#include "Soldat.h"
#include "Fantassin.h"

using namespace std;


vector<Fantassin*> persosAlive(vector<Fantassin*> p)
{
	vector<Fantassin*> tmp;
	for (Fantassin* f : p)
	{
		if (f->getVie() > 0)
			tmp.push_back(f);
		else
			delete f;
	}
	return tmp;
}

Fantassin* fabriqueDeTueurs(Damier* d)
{
	switch (myRand(0, 1))
	{
	case 0:
		return new Fantassin(d);
	case 1:
		return new Soldat(d);
	}
}

int main(int argc, char** argv)
{
	time_t deb = time(NULL);
	srand(deb);

	int largeur = 20;
	int hauteur = 20;
	int nbFantassins = 10;

	if (argc == 4)
	{
		largeur = atoi(argv[1]);
		hauteur = atoi(argv[2]);
		nbFantassins = atoi(argv[3]);
	}

	Damier* dam = new Damier(largeur, hauteur);
	vector<Fantassin*> mesFantassins;

	for (int i = 0; i < nbFantassins; i++)
	{
		Fantassin* f = fabriqueDeTueurs(dam);
		dam->setRandomPerso(f);
		mesFantassins.push_back(f);
	}
	
	dam->afficher();

	while(true)
	{
		for (int i = 0; i < mesFantassins.size(); i++)
		{
			mesFantassins[i]->deplacer();
			mesFantassins[i]->attaquer();			
		}
		dam->takeDeadPerso();

		dam->afficher();
		mesFantassins = persosAlive(mesFantassins);
		cout << endl << endl;

		if (dam->persosCount() <= 1)
			break;
	}
	
	cout << "Fini" << endl;

	
	for (int i = 0; i < mesFantassins.size(); i++)
		delete mesFantassins[i];

	delete dam;

	time_t fin = time(NULL);

	int interval = fin - deb;
	return 0;
}
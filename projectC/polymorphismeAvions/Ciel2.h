#pragma once
#include "ObjetVolant.h"
#define LARGEUR 10
#define LONGUEUR 10

class Ciel2
{
public:
	Ciel2();
	bool setobjetVolant(ObjetVolant* o);
	void display();
	ObjetVolant* getObjetvolant(int x, int y);
	void clear();

private:
	ObjetVolant* mTab[LARGEUR][LONGUEUR];
};


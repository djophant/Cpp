#pragma once
#include "Fantassin.h"

class Soldat : public Fantassin
{
public:
	Soldat(Damier* d);

	virtual void infligerDegat(int attaque, string type);
	virtual void attaquer();
};


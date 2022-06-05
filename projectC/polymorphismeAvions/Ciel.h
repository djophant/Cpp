#pragma once
#include "ObjetVolant.h"
#include <vector>

class Ciel
{
public:
	Ciel();
	void addObjetVolant(ObjetVolant* o);
	vector<ObjetVolant*> collisions();
	void display();
	vector<ObjetVolant*> objetsVolants();
	

private:
	vector<ObjetVolant*>  mObjetsVolants;	
};


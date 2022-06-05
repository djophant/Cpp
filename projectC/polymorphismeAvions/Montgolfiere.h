#pragma once
#include "ObjetVolant.h"
class Montgolfiere : public ObjetVolant
{
public:
	Montgolfiere(int largeur, int longueur);
	void updatepos();
};


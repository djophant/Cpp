#ifndef MYTABLE
#define MYTABLE
#include <string>

using namespace std;

class MonTableau
{

private:
	int* mData;//0x555222111
	int mTaille;
	string mNom;

	static int id; //variable statique partagée entre tous les objets de type MonTableau

public:
	MonTableau(); //1
	~MonTableau();
	MonTableau(const MonTableau& copie);

	int getTaille() const; //2
	string getNom() const;
	void setNom(string n);

	void append(int value); //3
	void afficher() const;
	void supprimer(int index);
	void inserer(int value, int index);
	void modifier(int value, int index);
	int get(int index) const;
	bool operator==(const MonTableau& tab) const;
	MonTableau operator+(const MonTableau tab) const;
	MonTableau& operator= (const MonTableau tab);


};
#endif
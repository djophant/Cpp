#include "mytable.h"
#include <iostream>
using namespace std; 

int MonTableau::id = 0;

MonTableau::MonTableau()
{
    mTaille = 0;
    mData = nullptr;
    //mData = new int[mTaille];
    mNom = "Tableau";
    id++;
}

MonTableau::MonTableau(const MonTableau& copie)
{
    mTaille = copie.mTaille;
    mData = new int[mTaille];
    mNom = copie.mNom;
    copie.id++;
}

MonTableau::~MonTableau()
{
    delete []mData;
}

int MonTableau::getTaille() const
{
    return mTaille;
}

string MonTableau::getNom() const
{
    return mNom;
}

void MonTableau::setNom(string n)
{
    mNom = n;
}

void MonTableau::append(int value)
{
    int length = mTaille;
    int *tab = new int[length];
    memcpy(tab, mData, mTaille * sizeof(int));
    tab[mTaille] = value;
    if(mData != nullptr)
        delete []mData;
    mData = tab;

    mTaille++;
}

void MonTableau::afficher() const
{
    for (int i=0; i<mTaille; i++)
        cout << mData[i] << " ";

    cout << endl;
}

void MonTableau::supprimer(int index)
{
    int a = 0;
    if(index>=0 && index < mTaille)
    {
        a = mData[index];
        for(int i=index; i<mTaille-1; i++)
            mData[i] = mData[i+1];
        mTaille--;
    }
}

void MonTableau::inserer(int value, int index) // memoization
{
    int length = mTaille; // 
    if(index >= 0 && index <= mTaille)
    {
        for(int i=mTaille-1; i>index; i--)
            mData[i+1] = mData[i];

        mData[index] = value;
        mTaille++;
    }
}

void MonTableau::modifier(int value, int index)
{
    if(index>=0 && index<mTaille)
        mData[index] = value;
}

int MonTableau::get(int index) const
{
    return mData[index];
}

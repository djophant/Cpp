#ifndef BANQUE 
#define BANQUE 
// #pragma once 

typedef struct 
{
    int noCompte; 
    char etat; 
    char nom[80]; 
    float solde;
} cpt;

cpt creerCompteBancaire();
void updateEtat(cpt account);
void afficherCompteBancaire(cpt account);
void modificationSolde(float sold, cpt* account);

#endif 
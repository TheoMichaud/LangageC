#ifndef BIBLIODEFONCTION_H_INCLUDED
#define BIBLIODEFONCTION_H_INCLUDED

void afficherFiche(char *nom,char *prenom,char sexe,int age,float taille,float poids);
void tableauCorpulence(float imc,float taille,float poids);
float Lorentz(float taille,char sexe);
float LorentzAge(int age,float taille);
float Devine(float taille,char sexe);

#endif // BIBLIODEFONCTION_H_INCLUDED

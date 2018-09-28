#ifndef BIBLIOPERSO_H_INCLUDED
#define BIBLIOPERSO_H_INCLUDED
#define LARGEUR 15
#define HAUTEUR 9

void afficherMenu(char sexe);
float additionReel(float v1, float v2);
void afficherCarre(int v1);
int calculerCarre(int v1);
float calculerDiscriminant(float a, float b, float c);
void afficherRacines(float a, float b, float c);
void afficherUneLigne(int tailleLigne);
void afficherUnCarre(int tailleCote);
void afficherUnRectangle(int taille);
void afficherBords(int etoile);
int compterSymbole(char *chaine1, char caractere);
int verifTerminaison(char *chaine, char fin[2]);

void initGrille(unsigned char tab[LARGEUR][HAUTEUR]);
void afficheGrille(unsigned char tab[LARGEUR][HAUTEUR]);
int nbCroix(unsigned char tab[LARGEUR][HAUTEUR]);

#endif // BIBLIOPERSO_H_INCLUDED


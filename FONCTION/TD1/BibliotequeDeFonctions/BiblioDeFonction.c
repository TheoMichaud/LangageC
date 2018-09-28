#include <stdio.h>
#include <stdlib.h>
#define LARGEUR 15
#define HAUTEUR 9

void afficherMenu(char sexe){
    if(sexe == 'f'){
        printf("Menu pour femme\n");
    }
    if(sexe == 'h'){
        printf("Menu pour homme\n");
    }
}

float additionReel(float v1, float v2){
    return v1+v2;
}

void afficherCarre(int v1){
    printf("%d", v1*v1);
}

int calculerCarre(int v1){
    return v1*v1;
}

float calculerDiscriminant(float a, float b, float c){
    return b*b-4*a*c;
}

void afficherRacines(float a, float b, float c){
    int delta = b*b-4*a*c;
    if(delta > 0){
        printf("Il y a deux solutions.\n");
        printf("La première est %.2f.\n", (-b+(delta/delta))/(2*a));
        printf("La seconde est %.2f.\n", (-b-(delta/delta))/(2*a));
    }
    if(delta == 0){
        printf("Il n'y a qu'une solution qui est %.2f.\n", -b/(2*a));
    }
    if(delta < 0){
        printf("Le discriminant n'admet aucune solution.\n");
    }
}

void afficherUneLigne(int tailleLigne){
    int i;
    for(i=0; i < tailleLigne; i++){
            printf("*");
    }
}

void afficherUnCarre(int tailleCote){
    int i,j;
    for(i=0; i < tailleCote; i++){
        /**
        for(j=0; j < tailleCote; j++){
            printf("*");
        }
        **/
        afficherUneLigne(tailleCote);
        printf("\n");
    }
}

void afficherBords(int etoile){
    int i;
    printf("*");
    for(i=0; i < etoile; i++){
            printf(" ");
    }
    printf("*");
}

void afficherUnRectangle(int taille){
    int i;
    afficherUneLigne(taille);
    printf("\n");
    for(i=0; i<taille; i++){
        afficherBords(taille-2);
        printf("\n");
    }
    afficherUneLigne(taille);
}

int compterSymbole(char *chaine1, char caractere){
    int i;
    int compteur=0;
    for(i=0; i<strlen(chaine1); i++){
        if(chaine1[i]==caractere)
        {
            compteur++;
        }
    }
    return compteur;
}

int verifTerminaison(char *chaine,char fin[2]){
    int finEnEr;

    if(chaine[strlen(chaine)-2] == fin[0] && chaine[strlen(chaine)-1] == fin[1])
    {
        finEnEr = 1;
    }
    else
    {
        finEnEr = -1;
    }
    return finEnEr;
}

void initGrille(unsigned char tab[LARGEUR][HAUTEUR]){
    int y,x;
    for(y=0; y<HAUTEUR; y++)
    {
        for(x=0; x<LARGEUR; x++)
        {
            tab[x][y]='.';
        }
    }
}

void afficheGrille(unsigned char tab[LARGEUR][HAUTEUR]){
    int x,y;
    unsigned char lettre='A';
    printf("  ");
    for(x=0; x<LARGEUR; x++)
    {
        printf(" %c",lettre++);
    }
    printf("\n");
    for(y=0; y<HAUTEUR; y++)
    {
        printf("%d ",y+1);
        for(x=0; x<LARGEUR; x++)
        {
            printf(" %c",tab[x][y]);
        }
        printf("\n");
    }
}

int nbCroix(unsigned char tab[LARGEUR][HAUTEUR]){
    int x,y;
    int cpt=0;
    for(y=0; y<HAUTEUR; y++)
    {
        for(x=0; x<LARGEUR; x++)
        {
            if(tab[x][y]=='X')
            {
                cpt++;
            }
        }
    }
return cpt;
}

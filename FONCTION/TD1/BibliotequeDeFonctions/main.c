#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BiblioDeFonction.h"

#define NBCARFIN 2
#define NBMAXCAR 50

#define LARGEUR 15
#define HAUTEUR 9

int main()
{
    char sexe;
    int valeurCarre;
    float valeurAddition1;
    float valeurAddition2;
    float a,b,c;
    int tailleLigne;
    int tailleCote;
    int taille;
    char chaine1[50];
    char caractere;


/********************MENU*****************/
/*
    printf("Bonjour.\n");
    printf("Votre sexe (h/f) :");
    scanf("%c", &sexe);

    afficherMenu(sexe);
*/
/********************SOMME*****************/
/*
    printf("\nSomme :");
    printf("\nSaisissez une valeur :");
    scanf("%f", &valeurAddition1);
    printf("Saisissez une seconde valeur :");
    scanf("%f", &valeurAddition2);
    printf("Votre somme est égale à %.2f.\n", additionReel(valeurAddition1, valeurAddition2));

*/
/********************CALCULERCARRE*****************/
/*
    printf("\nSaisissez une valeur pour afficher un carré :");
    scanf("%d", &valeurCarre);
    afficherCarre(valeurCarre);

    printf("\n\nSaisissez une valeur pour calculer un carré :");
    scanf("%d", &valeurCarre);
    printf("Votre valeur au carré donne %d.", calculerCarre(valeurCarre));

*/
/********************Terminaison*****************/
/*
    printf("\n\nCalculer un discriminant :\n");
    printf("Saisissez a :");
    scanf("%f", &a);
    printf("Saisissez b :");
    scanf("%f", &b);
    printf("Saisissez c :");
    scanf("%f", &c);
    printf("Votre discriminant est %.2f.\n", calculerDiscriminant(a, b, c));

    afficherRacines(a, b, c);

*/
/********************LIGNE*****************/
/*
    printf("\nAfficher une ligne :");
    printf("\nSaisissez la taille de la ligne :");
    scanf("%d", &tailleLigne);
    afficherUneLigne(tailleLigne);
*/
/********************CARRE*****************/
/*
    printf("\nAfficher un carré :");
    printf("\nSaisissez la taille du côté :");
    scanf("%d", &tailleCote);
    afficherUnCarre(tailleCote);
*/
/********************RECTANGLE*****************/
/*
    printf("\nAfficher un rectangle :");
    printf("\nSaisissez la taille :");
    scanf("%d", &taille);
    afficherUnRectangle(taille);
*/

/********************Compter symbol*****************/
/*
    int nbCar;
    printf("\nSaisissez une phrase :");
    //scanf(" %c", &chaine1);
    gets(chaine1);
    printf("\nChoix du caractère :");
    scanf(" %c", &caractere);
    nbCar=compterSymbole(chaine1,caractere);
    printf("Il y a : %d %c dans %s\n",nbCar,caractere,chaine1);

*/
/********************Terminaison*****************/
/*

    char chaine[NBMAXCAR];
    char terminaison[NBCARFIN]={'e','r'};
    int finEnEr;
    printf("\n\nDonner un mot : ");
    scanf(" %s",chaine);
    finEnEr=verifTerminaison(chaine,terminaison);
    if(finEnEr==1)
    {
        printf("%s se termine bien en ER\n\n\n\n",chaine);
    }
    else
    {
        printf("%s ne se termine pas en ER\n\n\n\n",chaine);
    }
*/
/********************NBcroix*****************/

    unsigned char tab[LARGEUR][HAUTEUR];
    int x,y;
    unsigned char lettre;
    int chiffre;
    int nombreDeCroix;

    initGrille(tab);
    do{
        afficheGrille(tab);
        printf("Ajouter une croix : lettreChiffre (ex: b4)\n");
        printf("fin avec a-1 : ");
        scanf(" %c%d",&lettre,&chiffre);
        if((lettre>='a' && lettre<='a'+LARGEUR) && (chiffre>=1 && chiffre<=HAUTEUR))
        {
            tab[lettre-'a'][chiffre-1]='X';
        }
    }while(lettre!='a' || chiffre!=-1);
    nombreDeCroix=nbCroix(tab);
    printf("il y a %d croix \n",nombreDeCroix);


    return 0;
}

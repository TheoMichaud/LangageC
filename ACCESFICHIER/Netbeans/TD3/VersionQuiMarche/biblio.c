/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "biblio.h"
#define NBCOULEURS 256

void afficheenTeteFichierBmp(enTeteFichierBmp fic)
{
    printf("\n|------Affichage en tete du fichier----------\n");
    printf("signature:%c%c\n",fic.signature[0],fic.signature[1]);
    printf("taille du fichier:%u\n",fic.tailleFichier);
    printf("reserve:%u\n",fic.reserve);
    printf("adresse image:%u\n",fic.adresseImg);
}

void afficheenTeteImageBmp(enTeteImageBmp img)
{
    printf("\n|------Affichage en tete de l image----------\n");
    printf("taille en tete:%u\n",img.tailleEnTete);
    printf("largeur:%u\n",img.largeur);
    printf("hauteur:%u\n",img.hauteur);
    printf("nombre de plan:%u\n",img.nbPlan);
    printf("bit par pixel:%u\n",img.bitParPixel);
    printf("type de compression:%u\n",img.typeCompression);
    printf("taille d'image:%u\n",img.tailleImage);
    printf("resolution horizontale:%u\n",img.resolutionHorizontale);
    printf("resolution verticale:%u\n",img.resolutionVerticale);
    printf("nombre de couleurs utilises:%u\n",img.nbCouleursUtilises);
    printf("nombre de couleurs importantes:%u\n",img.nbCouleursImportantes);
}
void changeCouleur(couleur palette[NBCOULEURS])
{
    int i=0;
    for(i=0;i<NBCOULEURS;i++)
    {
       //mise a zero des composantes autre que rouge
       palette[i].b=0;
       palette[i].r=0;
    }
}
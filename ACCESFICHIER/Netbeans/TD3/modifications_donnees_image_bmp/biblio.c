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


void afficherEnTeteFichierBmp(enTeteFichierBmp donnees)
{
    printf("données signatures : %c %c\n",donnees.signature[0],donnees.signature[1]);
    printf("taille fichier : %u \n",donnees.tailleFichier);
    printf("Réserve : %u \n",donnees.reserve);
    printf("adresse Img: %u \n",donnees.adresseImg);
}
void afficherEnTeteImageBmp(enTeteImageBmp reception)
{
    printf("taille entête: %u \n",reception.tailleEnTete);
    printf("Largeur : %u\n",reception.largeur);
    printf("hauteur: %u\n",reception.hauteur);
    printf("nbPLan : %u\n",reception.nbPlan);
    printf("bitParPixel : %u\n",reception.bitParPixel);
    printf("typeCompression : %u\n",reception.typeCompression);
    printf("tailleImage : %u\n",reception.tailleImage);
    printf("résolution horizontale : %u\n",reception.resolutionHorizontale);
    printf("résolution verticale :%u\n",reception.resolutionVerticale);
    printf("nb couleurs utilisées : %u\n",reception.nbCouleursUtilisees);
    printf("nb couleurs importantes : %u\n",reception.nbCouleurImportantes);
}

void changeCouleur(couleur palette[])
{ 
    int i;
    for (i = 0; i < NBCOULEURS; i++) {
            
            //mise à 0 des composantes autres que rouge 
            palette[i].bleu=0;
            palette[i].vert=0;
        }
}

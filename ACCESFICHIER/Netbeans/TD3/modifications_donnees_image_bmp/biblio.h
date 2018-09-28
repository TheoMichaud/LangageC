/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblio.h
 * Author: tmichaud
 *
 * Created on 5 février 2018, 11:30
 */

#ifndef BIBLIO_H
#define BIBLIO_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <math.h>
#include "biblio.h"
#pragma pack(push,1)

#define NBCOULEURS 256
typedef struct 
{
    unsigned char signature[2];
    unsigned int tailleFichier;
    unsigned int reserve;
    unsigned int adresseImg;
}enTeteFichierBmp;//14

typedef struct
{
    unsigned int tailleEnTete;
    unsigned int largeur;
    unsigned int hauteur;
    unsigned short int nbPlan;
    unsigned short int bitParPixel;
    unsigned int typeCompression;
    unsigned int tailleImage;
    unsigned int resolutionHorizontale;
    unsigned int resolutionVerticale;
    unsigned int nbCouleursUtilisees;
    unsigned int nbCouleurImportantes;
}enTeteImageBmp;//40

typedef struct 
{
    unsigned char bleu;
    unsigned char vert;
    unsigned char rouge;
    unsigned char alpha;
}couleur; //4

void afficherEnTeteFichierBmp(enTeteFichierBmp donnees);
void afficherEnTeteImageBmp(enTeteImageBmp reception);



#ifdef __cplusplus
}

#endif

#endif /* BIBLIO_H */


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   compression.h
 * Author: tmichaud
 *
 * Created on 12 février 2018, 08:15
 */

#ifndef COMPRESSION_H
#define COMPRESSION_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <math.h>
#pragma pack(push,1)

#define NBCOULEURS 256
    
    typedef struct {
        unsigned char signature[2];
        unsigned int tailleFichier;
        unsigned int reserve;
        unsigned int adresseImg;
    } typeEnTeteFichierBmp; //14

    typedef struct {
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
    } typeEnTeteImageBmp; //40

    typedef struct {
        unsigned char bleu;
        unsigned char vert;
        unsigned char rouge;
        unsigned char alpha;
    } couleur; //4

    void afficherEnTeteFichierBmp(typeEnTeteFichierBmp donnees);
    void afficherEnTeteImageBmp(typeEnTeteImageBmp reception);
    void decompressBmp(char *fichierSource, char *fichierACreer);
    void compressBmp(char *fichierSource, char *fichierACreer);



#ifdef __cplusplus
}
#endif

#endif /* COMPRESSION_H */


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblio.h
 * Author: tmichaud
 *
 * Created on 8 février 2018, 10:32
 */

#ifndef BIBLIO_H
#define BIBLIO_H

#ifdef __cplusplus
extern "C" {
#endif
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
        unsigned int nbCouleursUtilises;
        unsigned int nbCouleursImportantes;
    }enTeteImageBmp;//40

    typedef struct
    {
        unsigned char b;
        unsigned char v;
        unsigned char r;
        unsigned char a;
    }couleur;//4

    void afficheenTeteFichierBmp(enTeteFichierBmp fic);
    void afficheenTeteImageBmp(enTeteImageBmp img);
    void changeCouleur(couleur palette[NBCOULEURS]);
    
#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

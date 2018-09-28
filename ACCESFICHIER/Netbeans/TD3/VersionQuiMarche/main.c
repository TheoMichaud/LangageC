/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tmichaud
 *
 * Created on 8 février 2018, 10:32
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "biblio.h"
#define NBCOULEURS 256
/*
 * 
 */
int main(int argc, char** argv) {

    int i;
    FILE *fic;
    FILE *ficDestination;
    int retour;
    enTeteFichierBmp fichier;
    enTeteImageBmp image;
    couleur palette[NBCOULEURS];
    unsigned char octet;
    unsigned char *pixels;
    
    
    if(argc==3)
    {
      //j ai le nom du programe et un arg qui doit etre le fichier
        //dont on souhaite avoire les info
    
    fic=fopen(argv[1],"r");                             //ouverture
    if (fic == NULL)
    {
        printf("acces error : %s\n",strerror(errno));
        exit(errno);
    }
    
    retour = fread(&fichier, sizeof (fichier),1, fic); //lecture de l en tete du fichier
        if (retour !=1) {
            printf("erreur d ecriture avec fread\n");
            exit(retour);
        }
    
    retour = fread(&image, sizeof (image),1, fic);     //lecture de l en tete de l image
        if (retour !=1) {
            printf("erreur d ecriture avec fread\n");
            exit(retour);
        }  
    
    retour = fread(palette,sizeof(couleur),NBCOULEURS,fic);     //lecture de l en tete de l image
    if (retour !=NBCOULEURS)
        {
            exit(0);
        }
    pixels=malloc(image.tailleImage);
    retour=fread(pixels,1,image.tailleImage,fic);
    if(retour!=image.tailleImage)
    {
        exit(0);
    }
    
    retour=fclose(fic);
    
    if(retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }  
    
    
    printf("lecture ok\n");
    
    afficheenTeteFichierBmp(fichier); 
    afficheenTeteImageBmp(image);
    changeCouleur(palette);
    
    printf("traitement ok\n");
    
    //ecriture des en tetes et de la palette pour le fichier destination
    
    fic=fopen(argv[2],"wb");
    
    if(fic==NULL)
    {
        exit(0);
    }
    retour=fwrite(&fichier,sizeof(enTeteFichierBmp),1,fic);
    if(retour!=1)
    {
        exit(0);
    }
    retour=fwrite(&image,sizeof(enTeteImageBmp),1,fic);
    if(retour!=1)
    {
        exit(0);
    }
    retour=fwrite(palette,sizeof(couleur),NBCOULEURS,fic);
    if(retour!=NBCOULEURS)
    {
        exit(0);
    }
    retour=fwrite(pixels,1,image.tailleImage,fic);
    if(retour!=image.tailleImage)
    {
        exit(0);
    }   
    
    
    retour=fclose(fic);
    
    if(retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }  
    }

    return (EXIT_SUCCESS);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "biblio.h"
#pragma pack(push,1)

int main(int argc, char** argv) {
 
    FILE *fichierSource;
    FILE *fichierDestination;
    FILE *fic;
    enTeteFichierBmp eFic;
    enTeteImageBmp eImg;
    couleur palette[NBCOULEURS];
    unsigned char octet;
    int retour;
    int i;
 
   //afficher entête fichier BMP ; image BMP. 
   
    //ouverture du fichier

    enTeteFichierBmp variableTampon;
    
    fic=fopen("/tmp/plasma.bmp","r");
   if(fic==NULL)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
    
    //lecture du fichier
    retour=fread(&variableTampon,sizeof(enTeteFichierBmp),1,fic); // 18 correspond au nombre d'octets pris jusqu'à la largeur, SEEK_SET est la fonction qui permet de partir du début du fichier
    if (retour==0){                 // on teste une condition 
        printf("%s\n",strerror(errno));
        exit(errno);        
    }
    afficherEnTeteFichierBmp(variableTampon);
    // fermeture du fichier
    retour=fclose(fic);
    if(retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
    
    if(argc==2) 
    {
        fichierSource=fopen(argv[1],"r");
        if(fichierSource == NULL)
        {
            printf("Pb d'ouverture : %s",strerror(errno));
            exit(errno);
        }
        retour=fread(&eFic,sizeof(eFic),1,fichierSource);
        if(retour!=1)
        {
            printf("erreur de lecture : %s \n",strerror(errno));
            exit(errno);
        }
        retour=fread(&eImg,sizeof(eImg),1,fichierSource);
        if(retour!=1)
        {
            printf("erreur lecture : %s\n",strerror(errno));
            exit(errno);
        }
        retour=fread(palette,sizeof(couleur),NBCOULEURS,fichierSource);
        if(retour!=NBCOULEURS)
        {
            printf("erreur de lecture : %s\n",strerror(errno));
            exit(errno);
        }

        // modification de la palette
        for(i=0;i<NBCOULEURS;i++)
        {
            palette[i].vert=0;
            palette[i].bleu=0;
           
            
        }
        //retour=fwrite(palette,sizeof(couleur),NBCOULEURS,fichierDestination);
        unsigned char *pixelsmaloc(imageBmp,tailleImage);
        retour = fread(pixels,1,imageBmp,tailleImage,fic);
        
        
        
        retour=fclose(fic);
        if(retour==EOF){
            exit(0);
        }
        
        printf("lecture ok\n");
        
        afficherEnTeteFichierBmp(fichierBmp);
        afficherEnTeteImageBmp(imageBmp);
        changeCouleur(palette);
        
        printf("traintement ok\n");
        
        fic=fopen(argv[2],"")
        
                
                
    }  
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
    retour=fread(palette,sizeof(couleur),256,fic);
    if(retour!=256)
    {
        exit(0);
    }
 
    unsigned char *pixels=malloc(enTeteImageBmp.tailleImage);
    retour=fread(pixels,1,enTeteImageBmp.tailleImage,fic);
    if(retour!=enTeteImageBmp.tailleImage)
    {
        exit(0);
    }
    retour=fclose(fic);
    if(retour==EOF)
    {
        exit(0);
    }
    printf("Lecture OK \n");
    
    afficherEnTeteFichierBmp(eFic);
    afficherEnTeteImageBmp(eImg);
    changeCouleur(palette);
    printf("traitement OK \n");
    
    fic=fopen(argv[2],"wb");
    if(fic==NULL)
    {
        exit(0);
    }
    retour=fwrite(&fichierBmp,sizeof(enTeteFichierBmp),1,fic);
    if(retour!=1)
    {
        exit(0);
    }
    retour=fwrite(&imageBmp,sizeof(enTeteImageBmp),1,fic);
    if(retour!=1)
    {
        exit(0);
    }
    retour=fwrite(&palette,sizeof(couleur),256,fic);
    if(retour!=256)
    {
        exit(0);
    }    
    retour=fwrite(&pixels,1,imageBmp,tailleImage,fic);
    if(retour!=imageBmp,tailleImage)
    {
        exit(0);
    }  
    

     
}  
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tmichaud
 *
 * Created on 30 janvier 2018, 09:47
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "biblio.h"

/*
 * 
 */
int main(int argc, char** argv) {

        
    FILE *fic;
    int fd;
    int octets;
    int retour;

    nbMinus = 0;

    // ouverture du fichier en lecture seule
    fic=fopen("/home/USERS/ELEVES/SNIR2017/imgBMP/plasma.bmp","r");
    if (fic==NULL)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
            
            
    // fermeture fichier
    retour=fclose(fic);
    if (retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
      
    
    
     
    
            
            
    return (EXIT_SUCCESS);
}


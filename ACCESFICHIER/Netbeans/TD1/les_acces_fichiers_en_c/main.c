/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mrocher
 *
 * Created on 29 janvier 2018, 10:20
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/*
 * 
 */
int main() {

FILE *fic;
int retour;
char octets;    // ouverture du fichier en lecture seule 
    fic = fopen("/home/USERS/ELEVES/SNIR2017/fichierTexte.txt", "r");
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    // lecture du fichier du début à la fin (octet par octet) 
    while (!feof(fic)) {//lecture d'un octet
        retour = fread(&octets, sizeof (char), 1, fic);
        //affichage de l'octet s'il n'y a pas d'erreur(s) de lecture
        if (retour == 1) {
            printf("%c", octets);
        } else// la lecture est considérée en erreur
        {//il y a une erreur de lecture si ce n'est pas la fin du fichier 
            if (!feof(fic)) {
                printf("erreur de lecture");
                exit(0);
            }
        }
    }
    //fermeture du fichier
    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
}


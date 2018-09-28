/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mrocher
 *
 * Created on 29 janvier 2018, 11:30
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "maBiblio.h"

/*
 * 
 */
int main(int argc, char** argv) {
    FILE *fichier;
    int retour;
    typePersonne pers[5];
    int indice=0;

    for(indice=0; indice<5; indice++)
    {
        strcpy(pers[indice].nom,"Nom");
        strcpy(pers[indice].prenom,"Prenom");
        pers[indice].age=25;
        pers[indice].poids=90;
        pers[indice].sexe='m';
    }

  
    fichier=fopen("/home/USERS/ELEVES/SNIR2017/mrocher/fichierPersonne.txt","w");
    if (fichier==NULL)
    {
        printf("Probleme à l'ouverture : %s\n",strerror(errno));
        exit(errno);
    }

    //Ecriture dans le fichier des nom, prenom, age, poids et sexe de 5 personnes
    //Chaque champ etant suivi d'un retour à la ligne
    for(indice=0; indice<5; indice++)
    {
        //Lecture d'un octet
        retour=fprintf(fichier, "%s\n%s\n%d\n%.2f\n%c\n",pers[indice].nom,pers[indice].prenom,pers[indice].age,pers[indice].poids,pers[indice].sexe); 
        // ou fwrite pour écrire l'ensemble du tableau directement.(dans ce cas c'est une écriture ligne par ligne)
        if(retour<0)
        {
            printf("Erreur de lecture avec fprintf");
            exit(retour);
        }
    }

    //Fermeture du fichier
    retour=fclose(fichier);
    if(retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }

    return 0;
}



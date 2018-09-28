/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mrocher
 *
 * Created on 29 janvier 2018, 11:17
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char** argv) {
{
    FILE *fichier;
    int retour;
    char octets;
    int count=0;

    //Ouverture du fichier essai.txt en ecriture/creation
    fichier=fopen("/home/USERS/ELEVES/SNIR2017/fichierTexte.txt","r");
    if (fichier==NULL)
    {
        printf("Problème a l'ouverture : %s\n",strerror(errno));
        exit(errno);
    }

    //Si l'octet lu est une minuscule, incrementation du compteur de minuscules
    do
    {
        //Lecture d'un octet
        octets=fgetc(fichier);


        //Affichage de l'octet s'il n'y a pas d'erreur de lecture
        if(octets!=EOF)
        {
            printf("%c",octets);

            if((octets>='a')&&(octets<='z'))
            {
                count++;
            }
        }
        else  //La lecture est considere en erreur
        {
            //Il y a une erreur de lecture si ce n'est pas la fin de fichier
            if(!feof(fichier))
            {
                printf("Erreur de lecture");
                exit(errno);
            }

        }
    }
    while(!feof(fichier));

        //Fermeture du fichier
        retour=fclose(fichier);
    if(retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
    printf("\n\nLe nombre de lettre minuscule est: %d\n\n",count);

    return 0;
}
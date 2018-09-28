#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "maBiblio.h"

int main()
{
    FILE *fichier;
    int retour;
    typePersonne pers[5];
    int indice=0;

    for(indice=0; indice<5; indice++)
    {
        strcpy(pers[indice].nom,"nom");
        strcpy(pers[indice].prenom,"prénom");
        pers[indice].age=indice+10;
        pers[indice].poids=90-indice*2;
        pers[indice].sexe='m';
    }

    fichier=fopen("/home/USERS/ELEVES/SNIR2017/fichierPersonne.txt","w");
    if (fichier==NULL)
    {
        printf("Probleme a l'ouverture : %s\n",strerror(errno));
        exit(errno);
    }

    //Écriture dans le fichier des noms, prénoms, âges, poids et sexes de 5 personnes
    for(indice=0; indice<5; indice++)
    {
        //Lecture d'un seul octet
        retour=fprintf(fichier, "%s\n%s\n%d\n%.2f\n%c\n",pers[indice].nom,pers[indice].prenom,pers[indice].age,pers[indice].poids,pers[indice].sexe);
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
    FILE *fic;
    int retour;
    char octets;

    //Ouverture du fichier en lecture seule.
    fic=fopen("/home/USERS/ELEVES/SNIR2017/fichierTexte.txt","r");
    if(fic==NULL)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
    //Lecture du fichier du début à la fin, octet par octet.
    while(!feof(fic))
    {
        //Lecture d'un octet.
        octets=fgetc(fic);
        //affichage de l'octet s'il n'y a pas d'erreur de lecture
        if(octets!=EOF)
        {
            printf("%c",octets);
        }
        else //la lecture est considérée en erreur
        {
            //il y a une erreur de lecture si ce n'est pas la fin du fichier
            if(!feof(fic))
            {
                printf("erreur de lecture");
                exit(errno);
            }
        }


    }
    //fermeture fichier
    retour=fclose(fic);
    if(retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
}

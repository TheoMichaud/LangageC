#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/**programme écrivant la chaine de caractères "bonjour" dans un fichier nommé "essai.txt" et se trouvant dans votre répertoire personnel.

int main()
{
    FILE *fic ;
    int retour;

    fic=fopen("/home/USERS/ELEVES/SNIR2017/tmichaud/essai.txt","w+");
    if (fic==NULL)

    {
        printf("pb ouverture : %s\n",strerror(errno));
        exit(errno);
    }
    retour=fputs("bonjour",fic);
    if(retour==EOF)
    {
        printf("pb ecriture : %s\n",strerror(errno));
        exit(errno);
    }
        retour=fclose(fic);
        if(retour==EOF)
        {
            printf("pb fermeture : %s\n",strerror(errno));
            exit(errno);
        }


    return 0;
}
**/

/**p2. Donnez le code d'un programme qui affichera le contenu du fichier texte (/home/USERS/ELEVES/SNIR2017/fichierTexte.txt), caractère par caractère **/

int main()
{
    FILE *fic ;
    int retour;
    char octets;

    fic=fopen("/home/USERS/ELEVES/SNIR2017/fichierTexte.txt","r");
    if (fic==NULL)

    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }

    while(!feof(fic))
    {
        octets=fgetc(fic);
        if(octets!=EOF)
        {
            printf("%c",octets);
        }
        else{
            if(!feof(fic))
            {
                printf("erreur de lecture");
                exit(errno);
            }
        }
    }

    retour=fclose(fic);
    if(retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
    return 0;
}


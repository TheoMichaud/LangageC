/**********************************************************************************************************************/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LONGMAX 255

int main()
{
    char chaine[LONGMAX];

    printf("Saisir chaine :");
    gets(chaine);
    printf("la chaine est : %s\n",chaine);


    if (strcmp("toto",chaine)==0)
    {
        printf("la chaine est \"toto\"\n");
    }
    else{
        printf("la chaine n'est pas \"toto\"\n");
    }

    return 0;
}
*/

/********************************Allocation caractère le nom est stocké dans une mémoire************************************/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main()
{
    char *nom;
    char buffer[TAILLEMAX];

    printf("Donnez votre nom :");
    scanf("%s",buffer);

    nom=(char*)malloc((strlen(buffer)+1)*sizeof(char));
    strcpy(nom,buffer);
    printf("votre nom est : %s \n",nom);

    free(nom);

    return 0;
}
*/
/**********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main()
{
    char *nom;
    char *prenom;
    char buffer[TAILLEMAX];

    printf("Donnez votre nom :");
    scanf("%s",buffer);

    nom=(char*)malloc((strlen(buffer)+1)*sizeof(char));
    strcpy(nom,buffer);
    printf("votre nom est : %s \n",nom);

    printf("Donnez votre prenom :");
    scanf("%s",buffer);

    prenom=(char*)malloc((strlen(buffer)+1)*sizeof(char));
    strcpy(prenom,buffer);
    printf("votre prenom est : %s \n",prenom);

    if(strcmp(nom,prenom)==0){                                          /**Strcmp --> obligatoire pour comparer les chaine **/
        printf("Votre nom et prenom sont identiques");
    }

    if(strcmp(nom,prenom)>0){
        printf("Votre nom est alphabétiquement après votre prenom");
    }

    if(strcmp(nom,prenom)<0){
        printf("Votre prenom est alphabétiquement après votre nom");
    }

    free(nom);
    free(prenom);

    return 0;
}


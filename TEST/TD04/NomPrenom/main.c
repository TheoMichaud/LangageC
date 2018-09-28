#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main()
{
    char *nom;
    char *prenom;
    char buffer[TAILLEMAX];

    printf("Donnez votre nom ");
    scanf("%s", buffer);

    nom=(char*)malloc((strlen(buffer)+1)*sizeof(char));
    strcpy(nom,buffer);
    printf("Votre nom est : %s \n", nom);

    printf("Donnez votre prenom ");
    scanf("%s", buffer);

    prenom=(char*)malloc((strlen(buffer)+1)*sizeof(char));
    strcpy(prenom,buffer);
    printf("Votre prenom est : %s \n", prenom);

    if(strcmp(nom,prenom)==0){
    printf("Votre nom et votre prenom sont identiques");
    }
    if(strcmp(nom,prenom)>0){
    printf("Votre nom est alphabetiquement apres votre prenom");
    }
    if(strcmp(nom,prenom)<0){
    printf("Votre nom est alphabetiquement avant votre prenom");
    }

    free(nom);
    free(prenom);

    return 0;
}

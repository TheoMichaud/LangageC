#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *nom;
    char buffer[255];

    printf("donnez votre nom : ");
    scanf("%s", buffer);

    nom=(char*)malloc((strlen(buffer)+1)*sizeof(char));
    strcpy(nom,buffer);
    printf("votre nom est : %c \n", *nom+2);

    free(nom);

    return 0;
}

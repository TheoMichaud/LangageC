#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[50];
    int mots = 1;
    int indice;

    printf("Saisir une phrase : ");
    gets(phrase);

    for(indice=0; indice<strlen(phrase); indice++){
        if(phrase[indice] == ' '){
            mots++;
        }
    }

    printf("Il y a %i mots", mots);
    return 0;
}

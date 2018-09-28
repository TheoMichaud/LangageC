#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[50];
    int indice;
    int compteur = 0;

    printf("Saisir une phrase : ");
    gets(phrase);

    for(indice=0; indice<strlen(phrase); indice++){
        if(phrase[indice] == 'a' || phrase[indice] == 'A'){
            compteur++;
        }
    }

    printf("Il y a %i 'a'", compteur);

    return 0;
}

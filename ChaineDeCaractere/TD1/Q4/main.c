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
        if(phrase[indice] == 'a' || phrase[indice] == 'A'|| phrase[indice] == 'e'|| phrase[indice] == 'E'|| phrase[indice] == 'i'|| phrase[indice] == 'I'|| phrase[indice] == 'o'|| phrase[indice] == 'O'|| phrase[indice] == 'u'|| phrase[indice] == 'U'|| phrase[indice] == 'y'|| phrase[indice] == 'Y'){
            compteur++;
        }
    }

    printf("Il y a %i voyelles", compteur);

    return 0;
}

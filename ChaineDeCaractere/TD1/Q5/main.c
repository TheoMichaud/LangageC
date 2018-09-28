#include <stdio.h>
#include <stdlib.h>

int main()
{
    char verbe[50];
    char affichage[50];
    int longueur;

    printf("Saisir une phrase : ");
    gets(phrase);

    for(indice=0; indice<strlen(phrase); indice++){
        if(phrase[indice] != 'a' || phrase[indice] != 'A'|| phrase[indice] != 'e'|| phrase[indice] != 'E'|| phrase[indice] != 'i'|| phrase[indice] != 'I'|| phrase[indice] != 'o'|| phrase[indice] != 'O'|| phrase[indice] != 'u'|| phrase[indice] != 'U'|| phrase[indice] != 'y'|| phrase[indice] != 'Y'){
            compteur++;
        }
    }

    printf("Il y a %i consonnes", compteur);

    return 0;
}

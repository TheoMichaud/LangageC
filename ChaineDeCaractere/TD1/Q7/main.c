#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[50];
    int indice;

    printf("Saisir une phrase :");
    gets(phrase);

    for(indice=strlen(phrase); indice>=0; indice--){
        printf("%c", phrase[indice]);
    }

    return 0;
}

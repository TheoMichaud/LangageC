#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[100];
    int i;

    printf("Saisir une phrase (100 caractères max) : ");
    gets(phrase);

    for(i=strlen(phrase); i>=0; i--){
        printf("%c", phrase[i]);
    }

    return 0;
}

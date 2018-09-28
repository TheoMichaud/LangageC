#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[100];
    int i, cmpt;
    cmpt = 0;

    printf("Saisir une phrase (100 caractères max) : ");
    gets(phrase);

    for(i=0; i<strlen(phrase); i++){
        if(phrase[i] != 'a' && phrase[i] != 'A' && phrase[i] != 'e' && phrase[i] != 'E' && phrase[i] != 'i' && phrase[i] != 'I' && phrase[i] != 'o' && phrase[i] != 'O' && phrase[i] != 'U' && phrase[i] != 'u' && phrase[i] != 'y' && phrase[i] != 'Y'){
            cmpt++;
        }
    }

    printf("Il y a %i consonnes dans votre phrase.", cmpt);

    return 0;
}

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
        if(phrase[i] == 'a' || phrase[i] == 'A'){
            cmpt++;
        }
    }

    printf("Il y a %i 'a' dans votre phrase.", cmpt);

    return 0;
}

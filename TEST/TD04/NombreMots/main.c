#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[100];
    int mots = 1;
    int i;

    printf("Saisir une phrase (100 caractères max) : ");
    gets(phrase);

    for(i=0; i<strlen(phrase); i++){
        if(phrase[i] == ' '){
            mots++;
        }
    }

    printf("Il y a %i mot(s) dans votre phrase.", mots);
    return 0;
}

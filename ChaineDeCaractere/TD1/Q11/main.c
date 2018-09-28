#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[100];

    printf("Entrez une phrase: ");
    gets(phrase);

    if(strncmp(phrase, "salut")==0,1){
        printf("Bon début");
    }

    return 0;
}


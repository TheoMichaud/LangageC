#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[50];

    printf("Entrez une phrase: ");
    gets(phrase);

    if(strcmp(phrase, "bonjour")==0){
        printf("ok");
    }
    else{
        printf("J'attend bonjour !");
    }
    return 0;
}

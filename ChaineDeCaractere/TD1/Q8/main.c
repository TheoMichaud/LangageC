#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[50];
    int indice;

    printf("Saisir une phrase (100 caracteres max) : ");
    gets(phrase);

    for(indice=0; phrase[indice]!='\0'; indice++){
        if(phrase[indice]>=65 && phrase[indice]<=90){
            phrase[indice]=phrase[indice]+32;
        }
        else{
            if(phrase[indice]>=97 && phrase[indice]<=122)
            phrase[indice]=phrase[indice]-32;
        }
    }


    printf("%s", phrase);


    return 0;
}

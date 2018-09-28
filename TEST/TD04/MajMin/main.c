#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[100];
    int i;

    printf("Saisir une phrase (100 caracteres max) : ");
    gets(phrase);

    for(i=0; phrase[i]!='\0'; i++){
        if(phrase[i]>=65 && phrase[i]<=90){
            phrase[i]=phrase[i]+32;
        }
        else{
            if(phrase[i]>=97 && phrase[i]<=122)
            phrase[i]=phrase[i]-32;
        }
    }


    printf("%s", phrase);


    return 0;
}

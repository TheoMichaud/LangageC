#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int compteur=0;
    char buffer[100];
    char buffer2[100];

    printf("saisir un texte :");
    gets(buffer);

    for(i=0, j=0; i<=strlen(buffer); i++){
        if((buffer[i]>='a' && buffer[i]<='z') || (buffer[i]>='A' && buffer[i]<='Z')){
            buffer2[j] = buffer[i];
            j++;
        }

    }


printf("%s", buffer2);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine[100];
    char chaine2[100];
    int i, j;

    printf("Saisir une chaine de caracteres : ");
    gets(chaine);

    for(i=0, j=0; i<=strlen(chaine); i++){
        if((chaine[i]>=65 && chaine[i]<=90) || (chaine[i]>=97 && chaine[i]<=122)){
            chaine2[j] = chaine[i];
            j++;
        }
    }

    printf("%s", chaine2);

    return 0;
}

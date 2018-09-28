#include <stdio.h>
#include <stdlib.h>
#define LONGMAX 255

int main()
{
    char chaine[LONGMAX];

    printf("Saisir une chaine : ");
    gets(chaine);
    printf("La chaine est : %s\n", chaine);
    int n=0;
    for(char *n=chaine; *n; n++){
        printf("%c %3d %X\n", *n, *n, *n);
        //n++;
    }

    return 0;
}

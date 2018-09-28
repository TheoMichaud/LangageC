#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LONGMAX 255

int main()
{
    char chaine[LONGMAX];

    printf("Saisir chaine :");
    gets(chaine);
    printf("la chaine est : %s\n",chaine);

    printf("la longueur de la chaine est : %d\n",strlen(chaine));

    return 0;
}

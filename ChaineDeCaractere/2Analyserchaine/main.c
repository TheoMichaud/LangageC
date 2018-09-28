/*************************************************BOUCLE FOR****************************************************/
/*
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

    for (int n=0; n<strlen(chaine);n++){
        printf("%c %3d %X\n",chaine[n],chaine[n],chaine[n]);
    }

    return 0;
}
*/
/************************************************BOUCLE WHILE***************************************************/
/*
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
    int n=0;

    while (chaine[n]!=0){
        printf("%c %3d %X\n",chaine[n],chaine[n],chaine[n]);
        n++;
    }

    return 0;
}
*/
/**************************************************************************************************************/

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
    int n=0;

    for (char *n=chaine;*n;n++){
        printf("%c %3d %X\n",*n,*n,*n);
    }

    return 0;
}

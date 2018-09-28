#include <stdio.h>
#include <stdlib.h>

int main()
{


    char chaine[50];


    printf("Quel est votre message :\n");
    gets(chaine);
    printf("%s", chaine);


   /*
    scanf("%s",&chaine);
    printf("%s", chaine);

*/
    return 0;
}

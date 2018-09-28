#include <stdio.h>
#include <stdlib.h>

 main()
{
    char nom[20];
    char prenom[20];
    printf("Quel est votre nom ?");
    scanf("%s",&nom);
    printf("Quel est votre prénom ?");
    scanf("%s",&prenom);
    printf("Bonjour %s %s",prenom,nom);
    return 0;
}

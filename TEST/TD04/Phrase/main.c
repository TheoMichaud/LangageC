#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[20];

    printf("Saisir une phrase (max 20 caractères) : ");
    gets(phrase);
    printf("Votre phrase : %s", phrase);

    return 0;
}

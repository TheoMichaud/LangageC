#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[50];

    printf("Saisir une phrase : ");
    gets(phrase);
    printf("%s", phrase);

    return 0;
}


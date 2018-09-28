#include <stdio.h>
#include <stdlib.h>


void afficherMenu(char sexe)
    {
        if (sexe=='f')
        {
            printf("menu pour femme \n");
        }
        if (sexe=='h')
        {
            printf("menu pour homme \n");
        }
    }


int main()
{

    char genre;

    printf("Vous êtes un homme ou une femme (h/f) ? ");
    scanf("%c",&genre);

    afficherMenu(genre);

    afficherMenu('h');


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float IMC,taille,masse;
    printf("Entrer votre taille :\n");
    scanf("%f",&taille);
    printf("Entrer votre poids :\n");
    scanf("%f",&masse);
    taille=taille*taille;
    IMC=masse/taille;


    if ((IMC>=18.5) && (IMC<=25)){
        printf("Vous êtes dans la norme !");
    }

    else {
        printf("Vous n'êtes pas dans la norme !");
    }

    return 0;
}

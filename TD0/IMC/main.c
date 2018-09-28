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

    printf("Votre IMC est de %.2f",IMC);
    return 0;
}

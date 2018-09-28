#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valeurjoueur;
    int nbessai = 0 ;
    printf("Entrer votre valeur entre 0 et 30 :\n");

while(1){
    scanf("%f",&valeurjoueur);

    if (valeurjoueur < 10){
            nbessai=nbessai+1;
        printf("Votre valeur est inferieur à celle de l'ordi !\n");

    }
    if (valeurjoueur==10){
        printf("Votre valeur est égale à celle de l'ordi !\n");
        printf("Vous avez eu besoin de %d essais pour trouver",nbessai);
        return 0;
    }
    if (valeurjoueur > 10){
        printf("Votre valeur est supérieur à celle de l'ordi !\n");
    }

}
    return 0;
}

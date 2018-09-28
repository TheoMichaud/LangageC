#include <stdio.h>
#include <stdlib.h>

int main()
{
    float jour,heure,minute,total;
    printf("Entrer le nombre de jours :\n");
    scanf("%f",&jour);
    printf("Entrer le nombre d'heures :\n");
    scanf("%f",&heure);
    printf("Entrer le nombre de minutes :\n");
    scanf("%f",&minute);
    total=jour*24*60+heure*60+minute;
    printf("Le nombre total de minutes est de %.2f",total);
    return 0;
}

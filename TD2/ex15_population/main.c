#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taillePop1;
    int taillePop2;
    int tauxPop1;
    int tauxPop2;
    int annee;
    printf("population du 1er pays :");
    scanf("%d",&taillePop1);
    printf("population du 2eme pays (< 1er pays) :");
    scanf("%d",&taillePop2);
    printf("nombre d'habitants en plus chaque années dans le 1er pays :");
    scanf("%d",&tauxPop1);
    printf("nombre d'habitants en plus chaque années dans le 2eme pays (> 1er pays) :");
    scanf("%d",&tauxPop2);
    annee = 0;
    while (taillePop1>taillePop2)
    {
        taillePop1=taillePop1+tauxPop1;
        taillePop2=taillePop2+tauxPop2;
        annee++;
    }
    printf("la pop2 a dépassé pop1 en %d années",annee);
    return 0;
}

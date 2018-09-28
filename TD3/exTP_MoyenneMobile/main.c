#include <stdio.h>
#include <stdlib.h>

#define NB_ACQUIS 5

int main()
{
    float valeursBrutes[NB_ACQUIS];
    float valeursMoyennes[NB_ACQUIS-2];

    int indicemoy,indiceval;
    float somme=0,moyenne=0;

   for(indicemoy=0; indicemoy<NB_ACQUIS; indicemoy++){
        printf("Saisir une valeur : ");
        scanf("%f", &valeursBrutes[indicemoy]);
    }

    for(indicemoy=0; indicemoy<NB_ACQUIS-2; indicemoy++)
    {
            somme=0;
        for(indiceval=indicemoy;indiceval<=indicemoy+2;indiceval++)
        {
            somme=somme+valeursBrutes[indiceval];
        }
        moyenne=somme/3;
        valeursMoyennes[indicemoy]=moyenne;

    }

    for(indicemoy=0; indicemoy<NB_ACQUIS-2; indicemoy++)
    {
        printf("\nLa valeur %d du tableau moyenne est: %.2f",indicemoy, valeursMoyennes[indicemoy]);
    }

    return 0;
}



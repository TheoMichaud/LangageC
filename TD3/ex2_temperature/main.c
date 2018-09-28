#include <stdio.h>
#include <stdlib.h>
#define NBJOURS 2

int main()
{
    int mini[NBJOURS];
    int maxi[NBJOURS];
    int indice;

    for(indice=0; indice<NBJOURS; indice++){
        printf("Saisir les valeurs mini %i: ", indice+1);
        scanf("%i", &mini[indice]);
        printf("Saisir les valeurs maxi %i: ", indice+1);
        scanf("%i", &maxi[indice]);
    }

    int min = mini[0];
    int max = maxi[0];

    for(indice=0; indice<NBJOURS; indice++){
        if(mini[indice]<min){
            min = mini[indice];
        }
        if(maxi[indice]>max){
            max = maxi[indice];
        }
    }

printf("La valeur mini du mois est de : %i \n",min);

printf("La valeur maxi du mois est de : %i \n",max);


    return 0;
}


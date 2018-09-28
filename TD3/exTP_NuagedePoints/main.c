#include <stdio.h>
#include <stdlib.h>
#define NB_RELEVE 5

int main()
{
    int nuagePoints[NB_RELEVE];
    int indice;
    float somme = 0;
    float moyenne;


    for(indice=0; indice<NB_RELEVE; indice++){
            printf("Saisir valeur : ");
            scanf("%i", &nuagePoints[indice]);
    }



int min = nuagePoints[0];
int max = nuagePoints[0];

    for(indice=0; indice<NB_RELEVE; indice++){
        if(nuagePoints[indice]<min){
            min = nuagePoints[indice];
        }
        if(nuagePoints[indice]>max){
            max = nuagePoints[indice];
        }
    }


    for(indice=0; indice<NB_RELEVE; indice++){
        somme+=nuagePoints[indice];
    }

    somme=somme-(min+max);

    moyenne = somme/(NB_RELEVE-2);
    printf("La moyenne est de %.2f", moyenne);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 5

int main()
{
    int tab[TAILLEMAX];
    int min, tmp, i, j, k, posMin;

    for(i=0; i<TAILLEMAX; i++){
        printf("Saisir une valeur : ");
        scanf("%i", &tab[i]);
    }

    for(i=0; i<TAILLEMAX; i++){
        min = tab[i];
        posMin = i;
        for(j=i; j<TAILLEMAX; j++){
            if(tab[j]<min){
                min=tab[j];
                posMin=j;
            }
        }

        tmp=tab[i];
        tab[i]=tab[posMin];
        tab[posMin]=tmp;
    }

    for(i=0; i<TAILLEMAX; i++){
        printf("%i ", tab[i]);
    }
    return 0;
}

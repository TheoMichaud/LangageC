#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10];
    int indice;
    int j;
    int tmp;

    for(indice=0; indice<10; indice++){
        printf("Saisir valeur : ");
        scanf("%i", &tab[indice]);
    }

    for(indice=0, j=9; indice<5; indice++, j--){
        tmp=tab[indice];
        tab[indice]=tab[j];
        tab[j]=tmp;
    }

    printf("\n");

    for(indice=0; indice<10; indice++){
        printf("%i ", tab[indice]);
    }

    return 0;
}

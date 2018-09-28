#include <stdio.h>
#include <stdlib.h>
#define NBELEVES 5

int main()
{
    int notes[20];
    int indice;
    int note;

    for (indice=0;indice<NBELEVES;indice++){
        printf("Quelle est la note de l'élève %i ? : ", indice+1);
        scanf("%i" ,&note);
        notes[indice]=note;

    }

    for(indice=0; indice<NBELEVES; indice++){
        printf("L'eleve %i a eu la note %i/20\n", indice+1, notes[indice]);
    }

    return 0;
}

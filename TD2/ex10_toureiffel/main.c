#include <stdio.h>
#include <stdlib.h>

int main()
{
    double epaisseur=0.000076474;
    int nbPlie=0;
    do
    {
    epaisseur=epaisseur*2;
    nbPlie++;
    }
    while (epaisseur<320.755);
    printf("il faut donc plier la feuille %d fois pour atteindre la hauteur de la tour Eiffel !",nbPlie);
    return 0;
}

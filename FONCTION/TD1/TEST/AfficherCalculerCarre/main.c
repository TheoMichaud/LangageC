#include <stdio.h>
#include <stdlib.h>
#include "BiblioPerso.h"

int main()
{
    int res,val;

    printf("Saisir votre valeur :");
    scanf("%d",&val);
    afficherCarre(val);



    printf("valeur dont vous voulez afficher le carre : ");
    scanf("%d",&val);
    res=calculerCarre(val);




    return 0;
}

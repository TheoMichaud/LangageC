#include <stdio.h>
#include <stdlib.h>
#include "calculerCarre.h"

int main()
{
    int res,val;

    printf("valeur dont vous voulez afficher le carre : ");
    scanf("%d",&val);
    res=calculerCarre(val);


    return 0;
}

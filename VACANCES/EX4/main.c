#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choixFinal;

    do
        {
            printf("Voulez vous faire une autre partie (o/n)? ");
            scanf(" %c",&choixFinal);
        }
        while(choixFinal!='y' && choixFinal!='n');

        }
    if(choixFinal=='y'){
    printf("Ok, vous voulez continuer\n");

    }

    if (choixFinal=='n'){
        printf("Dommage, à bientôt\n");

    }

    else {
        printf("no comprendo");
    }

    return 0;
}

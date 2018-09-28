#include <stdio.h>
#include <stdlib.h>

int main()
{
int nbr;

printf("Quelle est l'année ? : ");
scanf("%d",&nbr);

    while(nbr>7){
       nbr=nbr-4;
    }

    if (nbr == 4)
        {
        printf("bissextile\n");

        }
        else
            {
            printf("non bissextile\n");

            }
}

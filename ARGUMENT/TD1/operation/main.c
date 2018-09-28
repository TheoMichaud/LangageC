#include <stdio.h>
#include <stdlib.h>
#include "operation.h"

int main(int argc, char *argv[])
{
    char operateur;
    float val1,val2;
    if(argc!=4){

        printf("usage : %s operateur(+,-,*,/) val1 val2\n",argv[0]);
    }
    //conversion des chaines


    //argv[1] -> operateur
    sscanf(argv[1],"%c",&operateur);

    //argv[2] -> val1
    sscanf(argv[2],"%d",&val1);
    //argv[3] -> val2
    sscanf(argv[3],"%d",&val2);
    //si operateur est +, afficher : val1 + val2 = val1+val2

    if(operateur=='+')
    {
            printf("%d+%d=%d",val1,val2,val1+val2);
    }

    return 0;
}

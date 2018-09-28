#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

int main()
{
    float a=5;
    float b=1;
    float c=-9;
    float x1;
    float x2;
    float delta;

    discriminant(a,b,c,&x1,&x2);

    printf("\nDelta = %f",discriminant(a,b,c,x1,x2));


    if((delta>0)||(delta=0))
    {
        printf("\nles solutions sont x1:%f    x2:%f\n",x1,x2);
    }




    return 0;
}

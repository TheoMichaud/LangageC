#include <stdio.h>
#include <stdlib.h>

int main()
{
    float val1=1.2;
    float val2=2.8;

    printf("avant val1 %f, val2 %f\n",val1,val2);
    swapFloat(&val1,&val2);
    printf("apres val1 %f, val2 %f\n",val1,val2);



    return 0;
}

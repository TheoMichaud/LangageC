#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

int main()
{
    int i;

    InitialiserLeds();

    for(i=0;i<8;i+=2)
    {
        Allumer(0,i,ROUGE);
    }

    return 0;
}

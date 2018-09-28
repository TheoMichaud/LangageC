#include <stdio.h>
#include <stdlib.h>

int main()
{
float x;
float f;
float i;

i=0;
f=0;

    for(x=1;x<5;x=x+0.00001)
    {
    f=((x*x)+3*x-5);
    i=i+(f*0.00001);
    }

    printf("%f",i);
}

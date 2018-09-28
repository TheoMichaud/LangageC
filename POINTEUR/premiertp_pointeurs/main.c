#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char *ptrOctet;
    int unEntier=0x12345678, i;

    ptrOctet = (char *)&unEntier ;

    for(i=0; i<sizeof(unEntier); i++)
    {
        printf("%04X : %02X\n", ptrOctet, *ptrOctet) ;
        ptrOctet++;
    }

    return 0;
}

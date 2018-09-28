#include "biblio.h"

unsigned int factorielEntier(unsigned int v)
{
    unsigned int fact;
    unsigned int i;
    fact=1;
    for(i=1;i<=v;i++)
    {
        fact=fact*i;
    }
    return fact;

}

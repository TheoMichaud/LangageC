#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Case;
    double nbGrain = 1;
    double nbGrainParCase = 1;
    for (Case=2; Case<=64;Case++)
    {
        nbGrainParCase = nbGrainParCase*2;
        nbGrain = nbGrain+nbGrainParCase;
    }
        printf("Le roi a donc promis %e grains de riz",nbGrain);

return 0;
}

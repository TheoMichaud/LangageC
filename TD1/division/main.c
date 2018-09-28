#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1 ;
    float v2 ;
    float resultat;

    printf("v1 =  \n");
    scanf("%f",&v1);
    printf("v2 =  \n");
    scanf("%f",&v2);

if (v2==0){
    printf("Le diviseur est nul  \n");
}

else {
    resultat=v1/v2;
    printf("v1 =  %.2f",resultat);
}

    return 0;
}

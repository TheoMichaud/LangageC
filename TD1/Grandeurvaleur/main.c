#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1 ;
    float v2 ;

    printf("v1 =  \n");
    scanf("%f",&v1);
    printf("v2 =  \n");
    scanf("%f",&v2);

if (v1>v2){
    printf("La valeur la plus grande est \n");
    printf("%f", v1);
}
else {
    printf("La valeur la plus grande est \n");
    printf("%f", v2);
}

    return 0;
}

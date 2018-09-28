#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1 ;
    float v2 ;
    float v3 ;

    printf("v1 =  \n");
    scanf("%f",&v1);
    printf("v2 =  \n");
    scanf("%f",&v2);
    printf("v3 =  \n");
    scanf("%f",&v3);


if ((v1>v2)&&(v1>v3)){
    printf("La valeur la plus grande est v1 : \n");
    printf("%f", v1);
}
else if ((v2>v1)&&(v2>v3)) {
    printf("La valeur la plus grande est v2 : \n");
    printf("%f", v2);
}
else if ((v3>v1)&&(v3>v2)) {
    printf("La valeur la plus grande est v3 : \n");
    printf("%f", v3);
}

    return 0;
}

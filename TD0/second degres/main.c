#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,delta,x1,x2;

    printf("Entrer a :\n");
    scanf("%f",&a);

    printf("Entrer b :\n");
    scanf("%f",&b);

    printf("Entrer c :\n");
    scanf("%f",&c);

    delta=b*b-4*a*c;
    printf("Delta est de : %.2f",delta);

    if (delta < 0){
        printf("Il n'y a pas de solution dans l'ensemble des réels !\n");

    }
    if (delta==0){
        printf("Il y a des solutions dans l'ensemble des réels !\n");
    }
    if (delta > 0){
        printf("Il y a des solutions dans l'ensemble des réels !\n");
        x1=((-b)+sqrt(delta))/2*a;
        printf("x1 = %.2f",x1);
        x2=((-b)-sqrt(delta))/2*a;
        printf("x2 = %.2f",x2);
    }

    return 0;
}

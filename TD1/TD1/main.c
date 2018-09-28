#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1 ;
    short int v2 ;
    long int v3 ;

    unsigned int v4 ;
    unsigned short int v5 ;
    unsigned long int v6 ;

    float r1 ;
    double r2 ;

    char c1 ;
    unsigned char c2 ;



    printf("v1 =  \n");
    scanf("%d",&v1);
    printf("v2 =  \n");
    scanf("%hd",&v2);
    printf("v3 = %ld \n");
    scanf("%ld",&v3);

    printf("v4 =  \n");
    scanf("%d",&v4);
    printf("v5 =  \n");
    scanf("%hd",&v5);
    printf("v6 =  \n");
    scanf("%ld",&v6);

    printf("r1 =  \n");
    scanf("%f",&r1);
    printf("r2 =  \n");
    scanf("%f",&r2);

    printf("c1 =  \n");
    scanf("%s",&c1);
    printf("c2 =  \n");
    scanf("%s",&c2);

    return 0;
}

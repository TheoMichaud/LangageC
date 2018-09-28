#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int val;

    printf("Entrer une valeur comprise entre 0 et 255 :\n");
    scanf("%d",&val);

    if (val>=128){
        val=val-128;
        printf("1");

    }
    else {
        printf("0");
    }
     if (val>=64){
        val=val-64;
        printf("1");

    }
    else {
        printf("0");
    }

    if (val>=32){
        val=val-32;
        printf("1");

    }
    else {
        printf("0");
    }

    if (val>=16){
        val=val-16;
        printf("1");

    }
    else {
        printf("0");
    }

    if (val>=8){
        val=val-8;
        printf("1");

    }
    else {
        printf("0");
    }

    if (val>=4){
        val=val-4;
        printf("1");

    }
    else {
        printf("0");
    }

    if (val>=2){
        val=val-2;
        printf("1");

    }
    else {
        printf("0");
    }

    if (val>=1){
        val=val-1;
        printf("1");

    }
    else {
        printf("0");
    }

    return 0;
}

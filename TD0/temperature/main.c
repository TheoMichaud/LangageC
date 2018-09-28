#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F,C,division,somme,addition;
    printf("Entrer la température en degrès\n");
    scanf("%d",&C);
    somme=C*9;
    division=somme/5;
    addition=division+32;
    printf("Cela correspond, en Fahrenheit, à %d",addition);
    return 0;
}

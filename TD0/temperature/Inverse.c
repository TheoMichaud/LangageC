#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F,C,division,somme,soustraction;
    printf("Entrer la température en Fahrenheit\n");
    scanf("%d",&F);
    soustraction=F-32;
    somme=soustraction*5;
    division=somme/9;
    printf("Cela correspond, en Degrès, à %d",division);
    return 0;
}


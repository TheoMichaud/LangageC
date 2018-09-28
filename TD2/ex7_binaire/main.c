#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valdecimal;
    int valbinaire;

    printf("Quelle est votre valeur décimale ?\n");
    scanf("%d",&valdecimal);

    if((valdecimal>=0)&&(valdecimal<256)){



    if(valdecimal>=128){                        //>=128
        printf("1");
        valdecimal=valdecimal-128;
    }
    else {
        printf("0");
    }

    if(valdecimal>=64){                        //>=64
        printf("1");
        valdecimal=valdecimal-64;
    }
    else {
        printf("0");
    }

    if(valdecimal>=32){                        //>=32
        printf("1");
        valdecimal=valdecimal-32;
    }
    else {
        printf("0");
    }

    if(valdecimal>=16){                        //>=16
        printf("1");
        valdecimal=valdecimal-16;
    }
    else {
        printf("0");
    }

    if(valdecimal>=8){                        //>=8
        printf("1");
        valdecimal=valdecimal-8;
    }
    else {
        printf("0");
    }

    if(valdecimal>=4){                        //>=4
        printf("1");
        valdecimal=valdecimal-4;
    }
    else {
        printf("0");
    }

    if(valdecimal>=2){                        //>=2
        printf("1");
        valdecimal=valdecimal-2;
    }
    else {
        printf("0");
    }

    if(valdecimal>=1){                        //>=1
        printf("1");
        valdecimal=valdecimal-1;
    }
    else {
        printf("0");
    }

}

if(valdecimal>=256){
    printf("IMPOSSIBLE !\n");
}


    return 0;

}

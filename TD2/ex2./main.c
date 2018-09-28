#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1 ;

    printf("Entrer votre note (entre 0 et 20) : \n");
    scanf("%f",&v1);

 if(v1<4){
    printf("E\n");
 }

 else if((v1>=4)&&(v1<8)){
    printf("D\n");
 }

 else if((v1>=8)&&(v1<12)){
    printf("C\n");
 }

 else if((v1>=12)&&(v1<16)){
    printf("B\n");
 }

 else if((v1>=16)&&(v1<=20)){
    printf("A\n");
 }





    return 0;
}

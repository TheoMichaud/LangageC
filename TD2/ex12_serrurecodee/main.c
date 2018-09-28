#include <stdio.h>
#include <stdlib.h>

int main()
{
int code;
int essaie;
int codetentative;

code=896;
essaie=0;

while(essaie!=3 && codetentative!=code){
    printf("Entrer le code :\n") ;
    scanf("%d",&codetentative) ;
    essaie=essaie+1;
    }

     if (essaie==3 && codetentative!=code)
        {
        printf("trop d'erreurs\n");

        }
        else
            {
            printf("code OK");

            }


}

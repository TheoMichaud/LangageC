#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nbdiez;

 int ligne,colonne;

    printf("Quelle est votre nombre ?\n");
    scanf("%d", &nbdiez);


    for
        (ligne=nbdiez;ligne>=1;ligne--){
        for(colonne=1;colonne<=ligne;colonne++){
                printf("#");
        }
            printf("\n");
    }



    return 0;
}

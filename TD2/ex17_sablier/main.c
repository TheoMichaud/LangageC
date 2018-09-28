#include <stdio.h>
#include <stdlib.h>

int main()
{
    int premierligne, nbZero, val, i, j, k, ligne;
    val = 1;
    nbZero = 0;
    ligne = 0;

    do{
        printf("Nombre de valeur sur la premiere ligne: ");
        scanf("%i", &premierligne);
    }while(premierligne%2 == 0);


    for(i=0; i<premierligne; i++){
        k = 0;

        while(k<nbZero){
            printf("0  ");
            k++;
        }

        for(j=0+(nbZero*2); j<premierligne; j++){

            k=0;
            if(val<10){
                printf("%i  ", val);
            }
            else{
                printf("%i ", val);
            }
            val++;
        }
        while(k<nbZero){
                printf("0  ");
                k++;
        }

        if(nbZero<(premierligne/2) && ligne<(premierligne/2)){
            nbZero++;
        }

        else{
            nbZero--;
        }
        ligne++;
        printf("\n");
    }

    return 0;
}

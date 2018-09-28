#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valeur;
    int nbvalpositive=0;
    int sommetotal=0;
    int moyenne;

    printf("Quelle est votre valeur ?\n");

    while(1)
    {
        scanf("%d",&valeur);

    if(valeur>=0){
        nbvalpositive=nbvalpositive+1;
        sommetotal=sommetotal+valeur;
        moyenne=sommetotal/nbvalpositive;
        printf("Vous avez rentré une valeur positive\n");
        printf("Vous avez saisis %d valeurs positives depuis le début\n",nbvalpositive);
        printf("La somme total est de %d \n",sommetotal);

     }
    if(valeur<0){

        printf("Vous avez rentré une valeur négative\n");
        printf("La moyenne totale des valeurs positives est de %d \n",moyenne);
        return 0;
    }

    }



    return 0;
}

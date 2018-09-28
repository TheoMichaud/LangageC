#include <stdio.h>
#include <stdlib.h>

int main()
{
    int debut,indice;
    int table;

    int fin;

    printf("Quelle table de multiplication voulez-vous ?\n");
    scanf("%d", &table);
    printf("Merci de saisir à quel niveau doit commencer la table\n");
    scanf("%d", &debut);
    printf("Merci de saisir à quel niveau doit finir la table\n");
    scanf("%d", &fin);



    for (indice=debut;indice<=fin;indice++){

        printf("%d * %d = %d \n",indice, table, table*indice);
    }



    return 0;
}

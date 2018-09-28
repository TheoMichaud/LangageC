#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int table;
    int debut,fin;

    printf("Quelle table voulez-vous ?\n");
    scanf("%d", &table);
    printf("debut de la table ?\n");
    scanf("%d", &debut);
    printf("fin de la table ?\n");
    scanf("%d", &fin);

    for (i=debut;i<=fin;i++){
        printf("%d * %d = %d \n",i,table,i*table);
    }



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbcoucou, i;


    printf("Combien de fois entend-on le coucou dans la forêt lointaine ?\n");
    scanf("%d", &nbcoucou);

    printf("Dans la forêt lointaine, on entend le coucou.\n");

    for (i=1; i<=nbcoucou; i++){
        printf("coucou !\n");
    }

    printf("fait le coucou.\n");

    return 0;
}

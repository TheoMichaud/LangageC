#include <stdio.h>
#include <stdlib.h>

int main()
{
    float note, moyenne;
    printf("Entrer la note entre 0 et 20 :\n");
    scanf("%f",&note);

    if (note < 10){
        printf("Vous avez moins que la moyenne !\n");
    }
    if (note==10){
        printf("Vous avez la moyenne !\n");
    }
    if (note > 10){
        printf("Vous avez plus que la moyenne !\n");
    }


    return 0;
}

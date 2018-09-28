#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char verbe[20];
    char je[20] = "e";
    char tu[20] = "es";
    char il[20] = "e";
    char nous[20] = "ons";
    char vous[20] = "ez";
    char ils[20] = "ent";

    printf("Saisir un verbe  : ");
    scanf("%s", verbe);

    if(verbe[strlen(verbe)-2] == 'e' && verbe[strlen(verbe)-1] == 'r'){
        if(strcmp("aller", verbe)){
            verbe[strlen(verbe)-1] = NULL;
            verbe[strlen(verbe)-1] = NULL;
            if(verbe[0] == 'a' || verbe[0] == 'e' || verbe[0] == 'i' || verbe[0] == 'o' || verbe[0] == 'u' || verbe[0] == 'y'){
                printf("J'          %s%s\n", verbe, je);
            }
            else{
                printf("Je          %s%s\n", verbe, je);
            }
            printf("Tu          %s%s\n", verbe, tu);
            printf("Il/Elle     %s%s\n", verbe, il);
            if(verbe[strlen(verbe)-1] == 'g'){
                printf("Nous        %se%s\n", verbe, nous);
            }
            else{
                printf("Nous        %s%s\n", verbe, nous);
            }
            printf("Vous        %s%s\n", verbe, vous);
            printf("Ils/Elles   %s%s\n", verbe, ils);
        }
        else{
            printf("aller n'est pas un verbe du premier groupe.\n");
        }
    }

    else{
        printf("%s n'est pas un verbe du premier groupe.\n", verbe);
    }

    return 0;
}

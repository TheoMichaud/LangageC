#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, length, verif;
    char mot[100];
    verif = 1;

    printf("Saisir un mot : ");
    scanf("%s", mot);

    length = strlen(mot);

    for (i=0, j=(length-1); i<length/2; i++, j--) {
        if (mot[i] != mot[j]){
            verif = 0;
        }
    }

    if(verif == 1){
        printf("%s est un palindrome.", mot);
    }
    else{
        printf("%s n'est pas un palindrome.", mot);
    }

    return 0;
}

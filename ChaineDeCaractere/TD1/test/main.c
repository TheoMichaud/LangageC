#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,verif;
    int compteur=0;
    char buffer[100];
    char buffer2[100];
    verif=1;

    printf("saisir un texte :");
    gets(buffer);

    for(i=0, j=0; i<=strlen(buffer); i++){
        if((buffer[i]>='a' && buffer[i]<='z') || (buffer[i]>='A' && buffer[i]<='Z')){
            buffer2[j] = buffer[i];
            j++;
        }

    }
printf("%s \n", buffer2);

for (i=0, j=(strlen(buffer2)-1); i<strlen(buffer2)/2; i++, j--) {
        if (buffer2[i] != buffer2[j]){
            verif = 0;
        }
    }


    if(verif == 1){
        printf("%s est un palindrome.", buffer);
    }
    else{
        printf("%s n'est pas un palindrome.", buffer);
    }


    return 0;
}

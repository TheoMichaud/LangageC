#include <stdio.h>
#include <stdlib.h>

int main()
{
    char login[30];
    char motDePasse[20];
    char log[20] = "toto";
    char pass[20] = "cisco";

    printf("Login : ");
    gets(login);
    printf("Mot de passe :");
    gets(motDePasse);

    if(strcmp(login, log)==0 && strcmp(motDePasse, pass)==0){
        printf("Acces autorise\n");
    }
    else{
        printf("Acces refuse\n");
    }

    return 0;
}


/**
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

**/

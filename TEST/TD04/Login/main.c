#include <stdio.h>
#include <stdlib.h>

int main()
{
    char login[20];
    char mdp[20];
    char log[20] = "toto";
    char pass[20] = "password";

    printf("Login : ");
    gets(login);
    printf("Password : ");
    gets(mdp);

    if(strcmp(login, log)==0 && strcmp(pass, mdp)==0){
        printf("Acces autorise\n");
    }
    else{
        printf("Acces refuse\n");
    }

    return 0;
}

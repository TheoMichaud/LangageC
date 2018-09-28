#include <stdio.h>
#include <stdlib.h>

void crypter(char phrase[100]){
    char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char cara[26] = {'@','8','[','0','3','{','6','#','1','}',':','7','W','Z','*','?','O','%','$','-','V','^','M','+','/','N'};
    int i=0, j, k, choix;

    do{
        for(j=0; j<27; j++){
            if(phrase[i]<=90 && phrase[i]>=65){
                if(phrase[i] == alpha[j]){
                    k=j;
                }
            }
            else{
                k=-1;
            }
        }
        if(k>=0){
            phrase[i] = cara[k];
        }
        i++;

    }while(phrase[i] != 0);

    printf("Votre phrase cryptée : %s\n", phrase);
}

void decrypter(char phrase[100]){
    char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char cara[26] = {'@','8','[','0','3','{','6','#','1','}',':','7','W','Z','*','?','O','%','$','-','V','^','M','+','/','N'};
    int i=0, j, k, choix;

    do{
        for(j=0; j<27; j++){
            if(phrase[i] != ' '){
                if(phrase[i] == cara[j]){
                    k=j;
                }
            }
            else{
                k=-1;
            }
        }
        if(k>=0){
            phrase[i] = alpha[k];
        }
        i++;
    }while(phrase[i] != 0);

    printf("Votre phrase décryptée : %s\n", phrase);
}

int main()
{
    int choix;
    char phrase[100];

    printf("Saisir une phrase : ");
    gets(phrase);

    printf("1- Crypter\n2- Decrypter\n");
    printf("Votre choix : ");
    scanf("%i", &choix);

    switch(choix){
        case 1: crypter(phrase);break;
        case 2: decrypter(phrase);break;
        default: printf("ERROR\n");break;
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLEMAX 27

int main()
{

    char tabLettres[TAILLEMAX]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char caractere[TAILLEMAX]= {'@','8','[','0','3','{','6','#','1','}',':','7','W','Z','*','?','O','%','$','-','V','^','M','+','/','N'};

    char chaine[50];
    int i,j;
    int longueur=0;
    int choixMenu;


    printf("Saisir une phrase à crypter ou à décrypter : ");
    gets(chaine);

    longueur=strlen(chaine);





    printf("1. Cryptage\n");
    printf("2. Décryptage\n");

    printf("Saisissez votre choix :");
    scanf("%d", &choixMenu);

    switch(choixMenu)
    {
    case 1:
        printf("Vous avez choisis de crypter : %s\n", chaine);

        for (i=0; i<longueur; i++)
        {
            if (chaine[i]!=32)
            {
                chaine[i]=caractere[chaine[i]-65];
            }

            else
            {
                chaine[i]=32;
            }

            printf("%c",chaine[i]);
        }


        printf("\n%s\n",chaine);





        break;
    case 2:



        printf("Vous avez choisis de crypter : %s\n", chaine);

        longueur=strlen(chaine);

        for(i=0; i<longueur; i++)         //Sruter la chaine pour mettre des majuscules
        {
            if(chaine[i]!=32)                  //Echange des minuscules en majuscules
            {
                j=0;
                while(caractere[j]!=chaine[i])
                {
                    j++;
                }
                chaine[i]=tabLettres[j];
            }
            else
            {
                chaine[i]=chaine[i];
            }
        }

        printf("\nLe message decrypte est: %s\n\n",chaine);

        break;


    default:
        printf("Choix IMPOSSIBLE!\n");
        break;
    }




}
//

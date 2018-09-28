#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1 ;
    float v2 ;
    float v3 ;
    int choixMenu;


    printf("v1 =  \n");
    scanf("%f",&v1);
    printf("v2 =  \n");
    scanf("%f",&v2);

 printf("1. faire la somme des valeurs\n");
 printf("2. faire la soustraction\n");
 printf("3. faire la différence\n");
 printf("4. faire le produit\n");

    printf("Saisissez votre choix :");
    scanf("%d", &choixMenu);

switch(choixMenu)
    {
                     case 1:
                          printf("Vous avez choisis de faire la somme des valeurs! \n");
                            v3=v1+v2;
                          printf("Le résultat est de : %f\n",v3);
                          break;
                     case 2:
                          printf("Vous avez choisis de faire la soustraction!\n");
                            v3=v1-v2;
                          printf("Le résultat est de : %f\n",v3);
                          break;
                     case 3:
                          printf("Vous avez choisis de faire la différence!\n");
                            v3=v1/v2;
                          printf("Le résultat est de : %f\n",v3);
                          break;
                     case 4:
                          printf("Vous avez choisis de faire le produit!\n");
                            v3=v1*v2;
                          printf("Le résultat est de : %f\n",v3);
                          break;
                     default:
                             printf("Choix IMPOSSIBLE!\n");
                             break;
    }




}

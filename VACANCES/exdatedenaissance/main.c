#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choixMenu;
    int jour;
    int mois;
    int annee;

    printf("Jour de naissance : ");
    scanf("%d",&jour);
    printf("\nMois de naissance : ");
    scanf("%d",&mois);
    printf("\nAnnée de naissance : ");
    scanf("%d",&annee);

     printf("\nVotre date de naissance est le %d/%d/%d \n",jour,mois,annee);


    printf("Format d'afichage de votre date de naissance\n");
    printf("1 - jj/mm/aaaa \n");
    printf("2 - jj-mm-aaaa \n");
    printf("3 - jj:mm:aaaa \n");
    printf("4 - jj.mm.aaaa \n");

    printf("Entrer un chiffre (1,2,3,4) : ");
    scanf("%c", &choixMenu);

 switch(choixMenu)
    {
                     case '1':
                          printf("Votre date de naissance est le : %d/%d/%d \n",jour,mois,annee);

                          break;
                     case '2':
                          printf("Votre date de naissance est le :  %d/%d/%d \n",jour,mois,annee);

                          break;
                     case '3':
                          printf("Votre date de naissance est le :  %d/%d/%d \n",jour,mois,annee);

                          break;
                     case '4':
                          printf("Votre date de naissance est le :  %d/%d/%d \n",jour,mois,annee);

                          break;

    }



    return 0;
}

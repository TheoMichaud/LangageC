#include <stdio.h>
#include <stdlib.h>
#include "BiblioDeFonction.h"

int main()
{
    char *nom[20],*prenom[20];
    char sexe;
    int age;
    float taille,poids,imc;
    char choixMenu;
    float poidsIdeal;
    //float tab[6]={16.5,18.5,25,30,35,4}

    printf("nom : ");
    scanf(" %s", &nom);
    printf("prenom : ");
    scanf(" %s", &prenom);
    do{
        printf("sexe (h ou f): ");
        scanf(" %c", &sexe);
    }while(sexe != 'h' && sexe != 'f');
    printf("age : ");
    scanf(" %d", &age);
    printf("taille (en metre) : ");
    scanf(" %f", &taille);
    printf("poids (en kg) : ");
    scanf(" %f", &poids);

    afficherFiche(prenom,nom,sexe,age,taille,poids);

    imc=(poids)/(taille*taille);
    printf("\nVotre IMC est de : %.2f",imc);

    tableauCorpulence(imc,taille,poids);




printf("\n\n\n\nCalculer votre poids idéal :\n");
printf("a - formule de lorentz\n");
printf("b - formule de devine\n");
printf("c - formule de lorentz en tenant compte de l'âge\n");
printf("q - Sortir du menu de calcul de poids\n");
printf("Votre choix (a,b,c ou q) : \n");


    scanf(" %c", &choixMenu);

 switch(choixMenu)
    {
                     case 'a':
                          poidsIdeal=Lorentz(taille,sexe);
                          printf("Votre poids idéal selon la formule de Lorentz est de : %.2f",poidsIdeal);

                          break;
                     case 'b':
                          poidsIdeal=Devine(taille,sexe);
                          printf("Votre poids idéal selon la formule de Devine est de : %.2f",poidsIdeal);

                          break;
                     case 'c':
                          poidsIdeal=LorentzAge(age,taille);
                          printf("Votre poids idéal selon la formule de Lorentz et selon l'âge est de : %.2f",poidsIdeal);

                          break;
                     case 'q':
                            return 0;

                          break;

    }

    return 0;
}

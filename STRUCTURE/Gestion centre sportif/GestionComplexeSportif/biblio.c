#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

char affichermenu(int nbAdherent)
{
    char choix;
if(nbAdherent==0)
    {
        printf("A:Ajouter une fiche adhérent\n");
        printf("Q:Quitter\n");
        scanf(" %c",&choix);
        }
    else
    {
        printf("A:Ajouter une fiche adhérent\n");
        printf("S:Supprimer une fiche\n");
        printf("M:Modifier une fiche\n");
        printf("V:Voir le contenu d'une fiche\n");
        printf("L:Voir le contenu de l'ensemble des fiches\n");
        printf("E:Supprimer toutes les fiches\n");
        printf("Q:Quitter\n");
        scanf(" %c",&choix);
    }
    return choix;
}

void afficherdate(typeDate dateAafficher)
{
    printf("Votre Date de naissance: ");
    scanf("%d/%d/%d",dateAafficher.jour,dateAafficher.mois,dateAafficher.annee);

}

void afficherActivite(sport listeSport)
{
  switch (listeSport)

  {
  case NATATION:
  printf("Vous avez choisi Natation ");
  break;
  case BASKETBALL:
  printf("Vous avez choisi Basketball ");
  break;
  case HANDBALL:
  printf("Vous avez choisi Handball ");
  break;
  case SQUASH:
  printf("Vous avez choisi Squash ");
  break;
  case TENNIS:
  printf("Vous avez choisi Tennis ");
  break;
  }
}


adherent *creerUnAdherent()
{
    int compteur;

    adherent *creerAdherent;
    creerAdherent=(adherent*)malloc(sizeof(adherent));

    printf("Nom: ");
    scanf("%s",creerAdherent->nom);

    printf("Prenom: ");
    scanf("%s",creerAdherent->prenom);

    printf("Date de naissance (JJ MM AAAA)");
    scanf("%d %d %d",&creerAdherent->dateDenaissance.jour,&creerAdherent->dateDenaissance.mois,&creerAdherent->dateDenaissance.annee);

    printf("Numero de carte: ");
    scanf("%d",&creerAdherent->numeroCarte);
    do
    {
        printf("Nombre d'activité: ");
        scanf("%d",&creerAdherent->nbActi);
    }
    while(creerAdherent->nbActi<1 || creerAdherent->nbActi>5);
    for(compteur=0;compteur<creerAdherent->nbActi;compteur++)
    {
        printf("Sport %d (Natation:1 Basketball:2 Handball:3 Squash:4 Tennis:5)\n",compteur+1);
        scanf("%d", (int*)&creerAdherent->listesport[compteur]);
    }
return creerAdherent;
}


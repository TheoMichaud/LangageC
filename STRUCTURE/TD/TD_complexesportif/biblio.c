#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"
/*
adherent creerAdherent()
{
    adherent adherentACreer;
    printf("Votre nom: ");
    scanf("%s",adherentACreer.nom);

    printf("Votre prenom: ");
    scanf("%s",adherentACreer.prenom);

    printf("Votre numéro de badge: ");
    scanf("%s",&adherentACreer.badge);

    printf("Votre numéro d'activité: ");
    scanf("%f",&adherentACreer.activite);

    printf("\n");

}

void afficherAdherent(adherent adherentACreer)
{
    printf("Nom : %s \nPrénom : %s \nNuméro de badge : %s \nNuméro d'activité : %f \n",
           adherentACreer.nom,adherentACreer.prenom,adherentACreer.badge,adherentACreer.activite);
}
*/


ADHERENT *creerUnAdherent()
{

    ADHERENT *creerAdherent;
    creerAdherent=(ADHERENT*)malloc(sizeof(ADHERENT));

    printf("Nom: ");
    scanf("%s",creerAdherent->nom);

    printf("Prenom: ");
    scanf("%s",creerAdherent->prenom);

    printf("Numero de badge: ");
    scanf("%d",&creerAdherent->numeroCarte);

    printf("Nombre d'activité: ");
    scanf("%d",&creerAdherent->nbActi);

return creerAdherent;
}

void afficherUnAdherent(ADHERENT *creerAdherent)
{

    printf("Information sur Adherent: \n%s\n %s\n %d\n %d\n",creerAdherent->nom,creerAdherent->prenom,creerAdherent->numeroCarte,creerAdherent->nbActi);
}

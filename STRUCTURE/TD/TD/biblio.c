#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

typePersonne creePersonne()
{
  typePersonne personneACree;

    printf("Votre nom: ");
scanf("%s",personneACree.nom);

printf("Votre prenom: ");
scanf("%s",personneACree.prenom);

printf("Votre année de naissance: ");
scanf("%u",&personneACree.annee);

printf("Votre taille: ");
scanf("%f",&personneACree.taille);

printf("Votre poids: ");
scanf("%f",&personneACree.poids);

printf("\n");

return personneACree;
}

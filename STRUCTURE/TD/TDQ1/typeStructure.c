#include <stdio.h>
#include <stdlib.h>
#include "typeStructure.h"


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



void afficherPersonne(typePersonne utilisateur)
{
    printf("Nom: %s\nPrenom: %s\nAnnée De Naissance: %u\nTaille: %.2f\nPoids: %.2f\n",utilisateur.nom,utilisateur.prenom,utilisateur.annee,utilisateur.taille,utilisateur.poids);
}


typePersonne *creePersonnePtr()
{
    typePersonne *personneACree;
    personneACree=(typePersonne*)malloc(sizeof(typePersonne));

    printf("Votre nom: ");
    scanf("%s", personneACree->nom);

    printf("Votre prenom: ");
    scanf("%s", personneACree->prenom);

    printf("Votre annee de naissance: ");
    scanf("%u", &personneACree->annee);

    printf("Votre taille: ");
    scanf("%f", &personneACree->taille);

    printf("Votre poids: ");
    scanf("%f", &personneACree->poids);

    return personneACree;
}
void afficherPersonnePtr(typePersonne *utilisateur)
{
    printf("Nom: %s\nPrenom: %s\nAnnée De Naissance: %u\nTaille: %.2f\nPoids: %.2f\n"
            ,utilisateur->nom,utilisateur->prenom,utilisateur->annee,utilisateur->taille,utilisateur->poids);
}


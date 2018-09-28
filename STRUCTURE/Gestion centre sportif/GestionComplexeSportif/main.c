#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

int main()
{
int nbAdherent=0;
char choix;
adherent *lesAdherents[5000];



do
    {
        choix = affichermenu(nbAdherent);
    switch(choix)
    {
    case 'A': /// ajouter une fiche adherent

        break;
    case 'Q':
        break;

    if(nbAdherent>1)
    {
    case 'S':///Supprimer une fiche
        break;
    case 'M':///Modifier une fiche
        break;
    case 'V':///Voir le contenu d'une fiche
        break;
    case 'L':///Voir le contenu de l'emsemble des fiches

        break;
    case 'E':///Supprimer toutes les fiches
        break;
    }
    }
    }while(choix!='Q');





    return 0;
}

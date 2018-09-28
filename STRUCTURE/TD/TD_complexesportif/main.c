#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

int main()
{
int nbAdherent;

//adherent utilisateur;
//utilisateur = creerAdherent();
//afficherAdherent(utilisateur);

//ADHERENT *lesAdherents[5000];
//lesAdherents[nbAdherent] = creerUnAdherent();
//afficherUnAdherent(lesAdherents);
//free(lesAdherents);

ADHERENT *creerAdherent;
creerAdherent = creerUnAdherent();
afficherUnAdherent(creerAdherent);
free(creerAdherent);



    return 0;
}

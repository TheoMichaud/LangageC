#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"


int main()
{

typePersonne *utilisateur;
utilisateur = creePersonnePtr();
afficherPersonnePtr(utilisateur);
free(utilisateur);


    return 0;
}

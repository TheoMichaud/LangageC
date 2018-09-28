#include <stdio.h>
#include <stdlib.h>
#include "typeStructure.h"

int main()
{
/*
typePersonne utilisateur;
utilisateur=creePersonne();
afficherPersonne(utilisateur);
*/

typePersonne *utilisateur;
utilisateur = creePersonnePtr();
afficherPersonnePtr(utilisateur);
free(utilisateur);




    return 0;
}

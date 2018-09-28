#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

    // l'executable se nomme facto

int main(int argc, char *argv[])
{
	unsigned int valeurFacto;
	// j'ai le bon nombre d'arguments
	if (argc==2)
	{
		//valeurFacto prend la valeur décimale de argv[1]
		sscanf(argv[1],"%d",&valeurFacto);
		// je fais appel à la fonction de calcul de factoriel
		printf("%d\n",factorielEntier(valeurFacto));
	}

    return 0;
}






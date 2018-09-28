#include "gestionPendu.h"



int motEstTrouve(char *motATtrouver, char *motPropose){
	return(strcmp(motATtrouver,motPropose));
}


int verifierLettrePropose(char *lettresProposees, int nbLettreProposee, char lettre)
{
	int lettreTrouve=1;
	int i;
	for(i = 0; i<nbLettreProposee;i++){
		/*
			a completer
		*/
	}
	return lettreTrouve;

}

//retourne une valeur entiere E[0..maxAlea[
unsigned int aleatoire( unsigned int maxAlea )
{
	struct timeb t;
	float a, b ;
	unsigned int nbmilli;
	ftime( &t );
	nbmilli = t.time * 1000 + t.millitm;
	srand( nbmilli );
	a = rand();
	b = ( maxAlea * a ) / RAND_MAX;
	return( ( unsigned int )b );
}

void initialiserMot(char *motCourant,int longueurMot){
	/*
		a completer
	*/
	motCourant[longueurMot]='\0';	// pour que le tableau de caracteres devienne une chaine de caracteres
}

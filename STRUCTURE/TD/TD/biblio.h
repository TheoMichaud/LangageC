#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED
#define NBCARMAXNOM 42
#define NBCARMAXPRENOM 50

typedef struct {

	char nom[NBCARMAXNOM];
	char prenom[NBCARMAXPRENOM];
	unsigned int annee;
	float taille;
	float poids;

}typePersonne;

typePersonne creePersonne();

#endif // BIBLIO_H_INCLUDED

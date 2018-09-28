#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED
#define NBCARMAXNOM 42
#define NBCARMAXPRENOM 50
#define NBCARMAXBADGE 5000


typedef struct
{
    char nom[NBCARMAXNOM];
    char prenom[NBCARMAXPRENOM];
    int nbActi,numeroCarte;

}ADHERENT;

ADHERENT *creerUnAdherent();

void afficherUnAdherent(ADHERENT *creerAdherent);

/*
adherent creerAdherent();

void afficherAdherent(adherent utilisateur);

*/
#endif // BIBLIO_H_INCLUDED

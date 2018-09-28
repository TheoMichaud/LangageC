#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED
#define NBCARMAXNOM 42

#define NBCARMAXNOM 50
#define NBCARMAXPRENOM 50
#define NBSPORT 5
#define NBMAXADHERENT 5000

typedef enum
{NATATION,BASKETBALL,HANDBALL,SQUASH,TENNIS
}sport;

typedef struct
{
unsigned int jour;
unsigned int mois;
int annee;
}typeDate;

typedef struct
{
    char nom[NBCARMAXNOM];
    char prenom[NBCARMAXPRENOM];
    unsigned char nbActivites;
    sport activites[5];
    int numCarte;
    typeDate date;
}adherent;

void afficherActivite(sport listeSport);

char affichermenu(int nbAdherent);

void afficherdate(typeDate dateAafficher);

adherent *creerUnAdherent();

void afficherUnAdherent(adherent *creerAdherent);

void AfficherLesAdherents(adherent *ad[],int nb);

void AjouterUnAdherent(adherent *tab[],int nb);





#endif // BIBLIO_H_INCLUDED

#ifndef BIBLIOTEST_H_INCLUDED
#define BIBLIOTEST_H_INCLUDED


#define NBCARMAXNOM 50
#define NBCARMAXPRENOM 50

typedef enum
{
  NATATION, BASKETBALL, HANDBALL, SQUASH, TENNIS
}sport;

typedef struct {
  unsigned char jour;
  unsigned char mois;
  int annee;
}typeDate;

typedef struct {
  char nom[NBCARMAXNOM];
  char prenom[NBCARMAXPRENOM];
  unsigned char nbActivites;
  sport activites[5];
  int numCarte;
  typeDate date;
}adherent;


#endif // BIBLIOTEST_H_INCLUDED


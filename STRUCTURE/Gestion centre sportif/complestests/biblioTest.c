#include <stdio.h>
#include <stdlib.h>
#include "biblioTest.h"



//fonction afficherDate qui prend en paramètres une date (de type date) et affiche celle-ci sous la forme JJ/MM/AAAA
void afficherDate(typeDate date)
{
  printf("%d/%d/%d", date.jour, date.mois, date.annee);
}

//fonction afficherActivite qui prend en paramètre un enum sport et affiche le sport correspondant.
void afficherActivite(sport activite)
{
  char *listeActivites[7]= {
    "natation", "basketball", "handball", "squash", "tennis"
  };
  printf("%s, ", listeActivites[activite]);
}

//fonction ayant pour prototype void afficherUnAdherent(adherent *ad) qui affiche les informations relatives à l'adhérent passé en paramètre.
void afficherUnAdherent(adherent *ad)
{
  unsigned char n;
  printf("nom : %s ,", ad->nom);
  printf("prenom :%s\n", ad->prenom);
  printf("nb d'activites: %d ; ", ad->nbActivites);
  for (n=0;n<ad->nbActivites;n++) afficherActivite(ad->activites[n]);
  printf("\nnum carte : %d\n", ad->numCarte);
  afficherDate(ad->date);
  printf("\n--------------------------\n");
}
//fonction ayant pour prototype adherent *creerUnAdherent() qui va demander les informations relatives à un adhérent
//et mettre à jour la structure (allouée dynamiquement) correspondante avant de retourner l'adresse de cette dernière.

adherent *creerUnAdherent()
{
  adherent *ad;
  ad=(adherent *) malloc(sizeof(adherent));

  printf("nom : ");
  scanf("%s", ad->nom);
  printf("\nprenom :");
  scanf("%s", ad->prenom);
  printf("nb d'activites: \n");
  scanf("%d", &(ad->nbActivites));
  printf("num carte : \n");
  scanf("%d", &(ad->numCarte));
  return ad;
}

adherent *creerUnAdherentRapide()
{
  srand (time(NULL));
  int nbActivites= rand() % 5 + 1 ;
  int n;
  adherent *ad;
  ad=(adherent *) malloc(sizeof(adherent));

  printf("memo ad ok %X\n",ad);
  strcpy(ad->nom, "toto");
  strcpy(ad->prenom, "titi");
  ad->nbActivites=nbActivites;
  for (n=0;n<nbActivites;n++) ad->activites[n]=rand() % 5 ;
  ad->numCarte=rand() % 200 + 1;
  (ad->date).jour=rand() % 30 +1;
  (ad->date).mois=rand() % 12 +1;
  (ad->date).annee=rand() % 10 + 1990;

  return ad;
}



int ajouterUnAdherent(adherent *tab[], int nb) {
  //tab[nb]=creerUnAdherent();
  tab[nb]=creerUnAdherentRapide();
  nb++;
  return nb;
}

void afficherAdherents(adherent *ad[], int nb)
{
  int n;
  for (n=0;n<nb;n++) {
    printf("adherant %d : \n", n);
    afficherUnAdherent(ad[n]);
  }
}


int supprimerUnAdherent(adherent *tab[], int nro, int nb)
{

  printf("nb start %d\n", nb);
  int n;
  int indiceAdherent=-1;
  for (n=0;n<nb;n++)
  {

    if (nro==(tab[n]->numCarte)) {
      printf("matched %d, %d\n", tab[n]->numCarte, n);
      indiceAdherent=n;
    }
  }
  if (indiceAdherent>=0) {
    printf("del %X\n",tab[indiceAdherent]);
    free(tab[indiceAdherent]);
    for (n=indiceAdherent;n<(nb-1);n++)
    {
      tab[n]=tab[n+1];
    }
    nb=nb-1;
  }
  printf("nb end %d\n", nb);
  return nb;
}

//fonction permettant de supprimer toutes les fiches.

int supprimerToutLesAdherent(adherent *tab[], int nb)
{
  int n;
  for (n=0;n<nb;n++)
  {
    free(tab[n]);
  }
  return 0;
}

//retoune l'indice dans le tableau qui correspond au numero d'adherent
int quelAdherent(adherent *tab[], int nb)
{
  int num, n;
  printf("quelle numero ? : \n");
  scanf("%d", &num);
  int indiceAdherent=-1;
  for (n=0;n<nb;n++)
  {
    if (num==(tab[n]->numCarte)) {
      printf("trouve %d, %d\n", tab[n]->numCarte, n);
      indiceAdherent=n;
    }
  }
  if  (indiceAdherent<0) printf("inconnu\n");
  return indiceAdherent;
}

int modifieUneFiche(adherent *tab[], int nb)
{
  printf("nom : ");
  scanf("%s", tab[nb]->nom);
  printf("\nprenom :");
  scanf("%s", tab[nb]->prenom);
}

void afficheMenu()
{
  int compteurAdherent=0;
  adherent *tab[5000];
  int indice;

  char choixMenu;
  do {
    printf("nb adherent %d \n", compteurAdherent);
    printf("A : Ajouter une fiche adherent\n");
    if (compteurAdherent!=0) {
      printf("S : Supprimer une fiche\n");
      printf("M : Modifier une fiche\n");
      printf("V : Voir le contenu d'une fiche\n");
      printf("L : Voir le contenu de toutes les fiches\n");
      printf("E : Supprimer toutes les fiches\n");
    }
    printf("Q : Quitter\n");
    scanf(" %c", &choixMenu);
    switch(choixMenu)
    {
    case 'A' :
      // afficherUnAdherent(creerUnAdherent());
      compteurAdherent=ajouterUnAdherent(tab, compteurAdherent);
      break;
    case 'S' :
      indice=quelAdherent(tab, compteurAdherent);
      if (indice>=0) compteurAdherent=supprimerUnAdherent(tab, tab[indice]->numCarte, compteurAdherent);

      break;
    case 'M' :
      indice=quelAdherent(tab, compteurAdherent);
      if (indice>=0) modifieUneFiche(tab, indice);
      break;
    case 'V' :
      indice=quelAdherent(tab, compteurAdherent);
      if (indice>=0) afficherUnAdherent(tab[indice]);
      break;
    case 'L' :
      afficherAdherents(tab, compteurAdherent);
      break;
    case 'E' :
      compteurAdherent=supprimerToutLesAdherent(tab, compteurAdherent);
      break;
    case 'Q' :
      printf("bye ! \n");
      break;
    default :
      printf("erreur\n");
    }
  }
  while (choixMenu!='Q');
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   foncCentre.h
 * Author: mrocher
 *
 * Created on 1 février 2018, 09:35
 */

#ifndef FONCCENTRE_H
#define FONCCENTRE_H

#ifdef __cplusplus
extern "C" {
#endif

#define TAILLEMAX 50
#define NBACTIVITE 5
#define MAXADHERENT 5000
typedef enum {NATATION, BASKET, HAND, SQUASH, TENNIS}sports;


typedef struct
{
	unsigned char jour;
	unsigned char mois;
	unsigned short int annee;
}typeDate;

typedef struct
{
	char nom[TAILLEMAX];
	char prenom[TAILLEMAX];
	typeDate dateNaissance;
	int nbActivite;
	sports activites[NBACTIVITE];
	int nroCarte;
}typeAdherent;

// affiche le menu en fonction du nombre d'adherents
void afficheMenu(int nb);

// affiche la date sous la forme JJ/MM/AAAA
void afficheDate(typeDate laDate);
// affiche l'activité en toute lettre en fonction du paramètre
void afficheActivite(sports act);
//affiche les informations relatives à un adhérent
void afficheUnAdherent(typeAdherent *ad);
// supprime un adherent de la liste des adhérents
int supprimerAdherent(typeAdherent *tab[],int nro,int nb);
// retourne en pointeur sur un type adhérent après avoir demandé tous les renseignements nécessaires
typeAdherent *creerAdherent();
// ajoute un adhérent au répertoire des adhérents
int ajouteAdherent(typeAdherent *tab[], int nb);
// affiche l'ensemble des fiches adhérents
void afficheAdherent(typeAdherent *ad[],int nb);
// retourne 0 si la date n'est pas validee, 1 si la date est correctement formatée
int verifDate(typeDate maDate);
// retourne 1 si le numéro d'adhérent est déjà dans le répertoire, 0 si le numero d'adhérent est nouveau
int adherentExiste( typeAdherent *tab[], int nb, int nro );
// retourne en pointeur sur un type adhérent après avoir demandé tous les renseignements nécessaires
// et verifie que le numero propose pour l'adhérent était nouveau
typeAdherent *creerAdherentV2(typeAdherent *tab[], int nb);
// retourne l'indice correspondant au numero d'adhérent donné en paramètre
// -1 si non trouvé
int getIndice(typeAdherent *tab[], int nb, int nro);
void sauvegarderAdherents(typeAdherent *tab[], int nbAdherents);
int chargeAdherent(typeAdherent *ad[]);


#ifdef __cplusplus
}
#endif

#endif /* FONCCENTRE_H */


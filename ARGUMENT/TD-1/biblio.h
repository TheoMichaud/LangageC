/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblio.h
 * Author: tmichaud
 *
 * Created on 29 janvier 2018, 10:20
 */

#ifndef BIBLIO_H
#define BIBLIO_H

#ifdef __cplusplus
extern "C" {
#endif
typedef struct personne{
	char nom[50];
	char prenom[50];
	int age;
	float poids;
	char sexe ; // 'f' ou 'm'
}typePersonne;  //109 normalement mais sans pragma -> 112 (car optimisation à 4 octets pour lecture bus)

void exo3(char *chemin);


#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */


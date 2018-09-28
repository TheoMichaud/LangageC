/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   maBiblio.h
 * Author: mrocher
 *
 * Created on 29 janvier 2018, 11:33
 */

#ifndef MABIBLIO_H
#define MABIBLIO_H
#define NBMAXCAR 50
#ifdef __cplusplus
extern "C" {
#endif

    typedef struct personne{
        char nom[NBMAXCAR];
        char prenom[NBMAXCAR];
        int age;
        float poids;
        char sexe; //'f'/'m'
    }typePersonne;


#ifdef __cplusplus
}
#endif

#endif /* MABIBLIO_H */


#ifndef MABIBLIO_H_INCLUDED
#define MABIBLIO_H_INCLUDED
#define NBMAXCAR 50

    typedef struct personne{
        char nom[NBMAXCAR];
        char prenom[NBMAXCAR];
        int age;
        float poids;
        char sexe; //'f' ou 'm'
    }typePersonne;


#endif // MABIBLIO_H_INCLUDED

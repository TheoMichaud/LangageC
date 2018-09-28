#ifndef TYPESTRUCTURE_H_INCLUDED
#define TYPESTRUCTURE_H_INCLUDED
#define NBCARMAXNOM 42
#define NBCARMAXPRENOM 50


typedef struct
{
    char nom[NBCARMAXNOM];
    char prenom[NBCARMAXPRENOM];
    unsigned int annee;
    float taille;
    float poids;
}typePersonne;

typePersonne creePersonne();

void afficherPersonne(typePersonne utilisateur);

typePersonne *creePersonnePtr();

void afficherPersonnePtr(typePersonne *utilisateur);





#endif // TYPESTRUCTURE_H_INCLUDED

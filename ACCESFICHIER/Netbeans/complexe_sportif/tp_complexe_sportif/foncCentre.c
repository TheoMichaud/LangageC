/***************************************************************************
 * foncCentre.c
 ***************************************************************************/

#include "foncCentre.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <errno.h>

void afficheMenu(int nb) {

    printf("A : Ajouter une fiche adhérent\n");
    if (nb != 0) {
        printf("S : Supprimer une fiche\n");
        printf("M : Modifier une fiche\n");
        printf("V : Voir le contenu d'une fiche\n");
        printf("L : Voir le contenu de l'ensemble des fiches\n");
        printf("E : Supprimer toutes les fiches\n");
        printf("D : Sauvegarder les fiches\n");
    }
    printf("Q : Quitter\n");
}

void afficheDate(typeDate laDate) {
    printf("%.2hhu/%.2hhu/%.4hu\n", laDate.jour, laDate.mois, laDate.annee);
}

void afficheActivite(sports act) {
    switch (act) {

        case NATATION:
            printf("natation\n");
            break;

        case BASKET:
            printf("basket ball\n");
            break;

        case HAND:
            printf("handball\n");
            break;

        case SQUASH:
            printf("squash\n");
            break;

        case TENNIS:
            printf("tennis\n");
            break;
    }

}

void afficheUnAdherent(typeAdherent *ad) {
    int i;
    printf("numero d'adherent : %d\n", ad->nroCarte);
    printf("nom : %s\n", ad->nom);
    printf("prenom : %s\n", ad->prenom);
    printf("date de naissance : ");
    afficheDate(ad->dateNaissance);
    printf("activites : ");

    for (i = 0; i < ad->nbActivite; i++)
        afficheActivite(ad->activites[i]);

}

int verifDate(typeDate maDate) {
    int ok = 1;
    if (maDate.annee < 0 || maDate.annee < 1900) ok = 0;
    if (maDate.jour < 1 || maDate.jour > 31) ok = 0;
    if (maDate.mois < 1 || maDate.mois > 12) ok = 0;
    return ok;
}

typeAdherent *creerAdherent() {
    typeAdherent *ad;
    int i, j, k;
    int activiteDejaPrise;
    sports act;
    ad = (typeAdherent*) malloc(sizeof ( typeAdherent));
    printf("numero d'adherent : \n");
    scanf(" %d", &(ad->nroCarte));
    printf("nom : \n");
    scanf(" %s", ad->nom);
    printf("prenom : \n");
    scanf(" %s", ad->prenom);
    do {
        printf("date de naissance :(JJ/MM/AAAA) ");
        scanf(" %hhu/%hhu/%hu", &ad->dateNaissance.jour, &ad->dateNaissance.mois, &ad->dateNaissance.annee);
    } while (verifDate(ad->dateNaissance) != 1);
    printf("combien d'activites : ");
    scanf(" %d", &(ad->nbActivite));

    for (i = 0; i < ad->nbActivite; i++) //demande les activités
    {

        printf("activite nro %d:\n", i);

        for (j = 0; j < NBACTIVITE; j++) // affiche les activités possibles
        {
            activiteDejaPrise = 0;

            for (k = 0; k < i; k++) // met a jour l'indicateur d'activité(s) déjà prise(s).
            {
                if (j == ad->activites[k]) // l'activité à afficher à déjà été prise
                {
                    activiteDejaPrise = 1;
                }
            }
            if (activiteDejaPrise == 0) //l'activité à afficher n'a pas encore été prise
            {
                printf("%d :", j);
                afficheActivite(j);
                printf("\n");
            }
        }

        scanf(" %u", &act);

        switch (act) {

            case NATATION:
                ad->activites[i] = NATATION;
                break;

            case BASKET:
                ad->activites[i] = BASKET;
                break;

            case HAND:
                ad->activites[i] = HAND;
                break;

            case SQUASH:
                ad->activites[i] = SQUASH;
                break;

            case TENNIS:
                ad->activites[i] = TENNIS;
                break;
        }

    }

    return ad;
}

typeAdherent *creerAdherentV2(typeAdherent *tab[], int nb) {
    typeAdherent *ad;
    int i, j, k;
    int activiteDejaPrise;
    int existe;
    sports act;
    ad = (typeAdherent*) malloc(sizeof ( typeAdherent));
    do {
        printf("numero d'adherent : \n");
        scanf(" %d", &(ad->nroCarte));
        existe = adherentExiste(tab, nb, ad->nroCarte);
        if (existe == 1) printf("ce numero est deja utilise\n");
    } while (existe == 1);
    printf("nom : \n");
    scanf(" %s", ad->nom);
    printf("prenom : \n");
    scanf(" %s", ad->prenom);
    do {
        printf("date de naissance :(JJ/MM/AAAA) ");
        scanf(" %hhu/%hhu/%hu", &ad->dateNaissance.jour, &ad->dateNaissance.mois, &ad->dateNaissance.annee);
    } while (verifDate(ad->dateNaissance) != 1);
    printf("combien d'activites : ");
    scanf(" %d", &(ad->nbActivite));

    for (i = 0; i < ad->nbActivite; i++) //demande les activités
    {
        do {
            printf("activite nro %d:\n", i);

            for (j = 0; j < NBACTIVITE; j++) // affiche les activités possibles
            {
                activiteDejaPrise = 0;

                for (k = 0; k < i; k++) // met à jour l'indicateur d'activité déjà prise.
                {
                    if (j == ad->activites[k]) // l'activité à afficher à déjà été prise
                    {
                        activiteDejaPrise = 1;
                    }
                }
                if (activiteDejaPrise == 0) //l'activité à afficher n'a pas encore été prise
                {
                    printf("%d :", j);
                    afficheActivite(j);
                    printf("\n");
                }
            }

            scanf(" %u", &act);
        } while (act < 0 || act >= NBACTIVITE);
        switch (act) {

            case NATATION:
                ad->activites[i] = NATATION;
                break;

            case BASKET:
                ad->activites[i] = BASKET;
                break;

            case HAND:
                ad->activites[i] = HAND;
                break;

            case SQUASH:
                ad->activites[i] = SQUASH;
                break;

            case TENNIS:
                ad->activites[i] = TENNIS;
                break;
        }

    }

    return ad;
}

int ajouteAdherent(typeAdherent *tab[], int nb) {
    tab[nb] = creerAdherentV2(tab, nb);
    return nb + 1;
}

int adherentExiste(typeAdherent *tab[], int nb, int nro) {
    int existe = 0;
    int i;

    for (i = 0; i < nb; i++) {
        if (tab[i]->nroCarte == nro) existe = 1;
    }
    return existe;

}

void afficheAdherent(typeAdherent *ad[], int nb) {
    int i;

    for (i = 0; i < nb; i++) {
        afficheUnAdherent(ad[i]);
        printf("---------------------------------------\n");
    }
}

int supprimerAdherent(typeAdherent *tab[], int nro, int nb) {
    int indiceASupprimer = 0;
    int i;
    int nbAdherent;
    nbAdherent = nb;
    // recherche l'indice correspondant au numéro de l'adhérent à supprimer

    while (!(indiceASupprimer == nb || tab[indiceASupprimer]->nroCarte == nro)) {
        indiceASupprimer++;
    }


    // décaler tous les adhérents à partir de l'indice de l'adhérent supprimé
    if (indiceASupprimer >= nb) // pas trouvé d'adhérent ayant le numéro demandé
    {
        printf("pas d'adherent ayant ce numero : %d\n", nro);
    } else // j'ai trouvé l'adhérent à supprimer
    {
        free(tab[indiceASupprimer]); // je supprime l'adhérent
        printf("suppression de l'adherent ayant ce numero : %d\n", nro);

        for (i = indiceASupprimer; i < nb - 1; i++) // décalage des autres adhérents dans le tableau
        {
            tab[i] = tab[i + 1];
        }
        nbAdherent--;
    }
    return nbAdherent;

}

int getIndice(typeAdherent *tab[], int nb, int nro) {
    int i;
    int indiceAdherent = -1;
    int trouve = 0;
    i = 0;
    while ((i < nb) && (trouve == 0)) {
        if (tab[i]->nroCarte == nro) {
            trouve = 1;
            indiceAdherent = i;
        }
        i++;
    }
    return indiceAdherent;
}

void sauvegardeAdherents(typeAdherent *ad[],int nb)
{
    FILE *fic;
    int retour;
    int i;
  
    //ouverture du fichier en écriture/création
    fic=fopen("fichierAdherent.txt","w");
    if (fic==NULL)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }

    //Ecriture dans le fichier de 5 personnes
    retour=fwrite(&nb,sizeof(int),1,fic);
    if(retour!=1)
    {
        printf("erreur d'écriture avec fwrite \n");
        exit(retour);
    }

    for(i=0;i<nb;i++)
    {
        retour=fwrite(ad[i],sizeof(typeAdherent),1,fic);
        
        if(retour!=1)
        {
            printf("erreur d'écriture avec fwrite \n");
            exit(retour);
        }
    //Fermeture du fichier
    retour=fclose(fic);
    if(retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
    printf("fichier sauvegardé \n");
    return 0;
}

}

int chargeAdherent(typeAdherent *ad[])
{
    int nb;
    FILE *fic;
    int retour;
    int i;
    
    //ouverture du fichier en lecture
    fic=fopen("fichierAdherent.txt","r");
    if(fic==NULL)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
    // écriture dans le fihcier de 5 personnes
    retour=fread(&nb,sizeof(int),1,fic);
    if(retour!=1)
    {
        printf("erreur d'écriture avec fread \n");
        exit(retour);
        
    }
    for(i=0;i<nb;i++)
    {
        ad[i]=malloc(typeAdherent*)malloc(sizeof(typeAdherent));
        retour=fread(ad[i],sizeof(int),1,fic);
        
        if(retour!=1)
        { 
            printf("erreur de lecture avec fread \n");
            exit(retour);
        }
            
    }
    //fermeture du fichier
    retour=fclose(fic);
    if(retour=EOF)
    {
        printf("%s",strerror(errno));
        exit(errno);
    }
    printf("%d adhérent(s) lu(s) \n",nb);
    return nb;
}

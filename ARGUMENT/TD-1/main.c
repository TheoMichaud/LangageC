/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tmichaud
 *
 * Created on 29 janvier 2018, 10:17
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "biblio.h"
/*
 * 
 */
/**programme écrivant la chaine de caractères "bonjour" dans un fichier nommé "essai.txt" et se trouvant dans votre répertoire personnel.**/
/*
int main(int argc, char** argv) {
    
    FILE *fic ;
    int retour;

    fic=fopen("/home/USERS/ELEVES/SNIR2017/tmichaud/essai.txt","w+");
    if (fic==NULL)

    {
        printf("pb ouverture : %s\n",strerror(errno));
        exit(errno);
    }
    retour=fputs("bonjour",fic);
    if(retour==EOF)
    {
        printf("pb ecriture : %s\n",strerror(errno));
        exit(errno);
    }
        retour=fclose(fic);
        if(retour==EOF)
        {
            printf("pb fermeture : %s\n",strerror(errno));
            exit(errno);
        }
    
    
    return (EXIT_SUCCESS);
}

 */

/**p2. Donnez le code d'un programme qui affichera le contenu du fichier texte (/home/USERS/ELEVES/SNIR2017/fichierTexte.txt), caractère par caractère **/
/*
int main(int argc, char** argv) {
    
FILE *fic ;
    int retour;
    char octets;

    fic=fopen("/home/USERS/ELEVES/SNIR2017/fichierTexte.txt","r");
    if (fic==NULL)

    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }

    while(!feof(fic))
    {
        octets=fgetc(fic);
        if(octets!=EOF)
        {
            printf("%c",octets);
        }
        else{
            if(!feof(fic))
            {
                printf("erreur de lecture");
                exit(errno);
            }
        }
    }

    retour=fclose(fic);
    if(retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
    
    
    return (EXIT_SUCCESS);
}
 */

/** Affiche le nombre de lettres minuscules non accentuées contenu dans le fichier. **/
/*
int main(int argc, char** argv) {
    
FILE *fic;
    int retour;
    char octets;
    int nbMinus;

    nbMinus = 0;

    // ouverture du fichier en lecture seule
    fic=fopen("/home/USERS/ELEVES/SNIR2017/fichierTexte.txt","r");
    if (fic==NULL)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }

    // lecture du fichier du debut à la fin , octet par octet
    do
    {
        //lecture d'un octet
        octets=fgetc(fic);
        // affichage de l'octet s'il n'y a pas d'erreur de lecture
        if (octets!=EOF)
        {
            printf("%c",octets);
            // si l'octet lu est une minuscule, incrementation du compteur de minuscules
            if (octets>='a' && octets<='z')
            {
                nbMinus++;
            }
        }
        else
        {
            // il y a une erreur de lecture si ce n'est pas la fin de fichier
            if (!feof(fic))
            {
                printf("erreur de lecture");
                exit(errno);
            }
        }
    }
    while(!feof(fic));

    // fermeture fichier
    retour=fclose(fic);
    if (retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
   

    printf("il y a %d lettres minuscules dans le fichier\n",nbMinus);
    
    
    return (EXIT_SUCCESS);
}
  

 */
/**  (lire)créer 5 personnes et sauvegarder les données dans un fichier. **/
/*
int main(int argc, char** argv) {
    
FILE *fic;
    int retour;
    typePersonne tabPers[5];
    int i;

    // init des 5 personnes
    for (i=0; i<5; i++)
    {
        tabPers[i].age=i*10;
        tabPers[i].poids=i*1.33;
        tabPers[i].sexe = 'f';
        strcpy(tabPers[i].nom,"unNom");
        strcpy(tabPers[i].prenom,"lePrenom");
    }

    // ouverture du fichier en ecriture/creation
    fic=fopen("/home/USERS/ELEVES/SNIR2017/tmichaud/essai.txt","w+");
    if (fic==NULL)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }

    //ecriture dans le fichier des nom, prenom, age, poids et sexe de 5 personnes
    // chaque champ etant suivi d'un retour à la ligne
    for (i=0; i<5; i++)
    {
        retour=fprintf(fic,"%s\n%s\n%d\n%f\n%c\n",tabPers[i].nom,tabPers[i].prenom,tabPers[i].age,tabPers[i].poids,tabPers[i].sexe);
        if (retour<0)
        {
            printf("erreur d'ecriture avec fprinf\n");
            exit(retour);
        }
    }

    // fermeture fichier
    retour=fclose(fic);
    if (retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
    
    
    return (EXIT_SUCCESS);
}
 */

/**  (ECRIRE)créer 5 personnes et sauvegarder les données dans un fichier. **/
/*
int main(int argc, char** argv) {

    FILE *fic;
    int retour;
    typePersonne tabPers[5];
    int i;

    for (i = 0; i < 5; i++) {
        tabPers[i].age = i * 10;
        tabPers[i].poids = i * 1.33;
        tabPers[i].sexe = 'f';
        strcpy(tabPers[i].nom, "unNom");
        strcpy(tabPers[i].prenom, "lePrenom");
    }

    // ouverture du fichier en ecriture/creation
    fic = fopen("/home/USERS/ELEVES/SNIR2017/tmichaud/essai.txt", "w+");
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    retour = fwrite(tabPers, sizeof (typePersonne), 5, fic);
    if (retour != 5) {
        printf("erreur d'ecriture avec fprinf\n");
        exit(retour);
    }


    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }


    return (EXIT_SUCCESS);
}
*/

/**  lire et afficher le contenu du fichier contenant des personnes générées par votre voisin **/
/*
int main(int argc, char** argv) {
    
    
FILE *fic;
    int retour;
    typePersonne tabPers[5];
    int i;

    // ouverture du fichier en ecriture/creation
    fic=fopen("/home/USERS/ELEVES/SNIR2017/tmichaud/essai.txt","r");
    if (fic==NULL)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
    
    for (i=0; i<5; i++)
    {
        retour=fscanf(fic,"%s\n%s\n%d\n%f\n%c\n",tabPers[i].nom,tabPers[i].prenom,&tabPers[i].age,&tabPers[i].poids,&tabPers[i].sexe);
        if (retour<0)
        {
            printf("erreur d'ecriture avec fprinf\n");
            exit(retour);
        }
    }
    
    for (i=0; i<5; i++)
    {
        printf("personne %d : %s\n%s\n%d\n%f\n%c\n",i+1,tabPers[i].nom,tabPers[i].prenom,tabPers[i].age,tabPers[i].poids,tabPers[i].sexe);
        if (retour<0)
        {
            printf("__________________\n");
        }
    }

    // fermeture fichier
    retour=fclose(fic);
    if (retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
    
    
    return (EXIT_SUCCESS);
}
*/

/**  lire et afficher le contenu du fichier contenant des personnes générées par votre voisin **/

int main(int argc, char** argv) {
    
    
FILE *fic;
    int retour;
    typePersonne tabPers[5];
    int i;

    // ouverture du fichier en ecriture/creation
    fic=fopen("/home/USERS/ELEVES/SNIR2017/tmichaud/essai.txt","r");
    if (fic==NULL)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
    
        retour=fread(tabPers, sizeof(typePersonne),5,fic);
        if (retour!=5)
        {
            printf("erreur d'ecriture avec fread\n");
            exit(retour);
        }
    
    for (i=0; i<5; i++)
    {
        printf("personne %d : %s\n%s\n%d\n%f\n%c\n",i+1,tabPers[i].nom,tabPers[i].prenom,tabPers[i].age,tabPers[i].poids,tabPers[i].sexe);
        printf("_____________\n");
    
    }

    // fermeture fichier
    retour=fclose(fic);
    if (retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
    
    
    return (EXIT_SUCCESS);
}




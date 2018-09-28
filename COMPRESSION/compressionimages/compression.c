/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "compression.h"

void afficherEnTeteFichierBmp(typeEnTeteFichierBmp donnees) {
    printf("Signature:%c Signature: %c\n", donnees.signature[0], donnees.signature[1]);
    printf("Taille Fichier: %u \n", donnees.tailleFichier);
    printf("Reserve : %u \n", donnees.reserve);
    printf("Adresse image: %u \n", donnees.adresseImg);
}

void afficherEnTeteImageBmp(typeEnTeteImageBmp reception) {
    printf("Taille en tête: %u octets\n", reception.tailleEnTete);
    printf("Taille largeur :%u octets\n", reception.largeur);
    printf("Taille hauteur :%u octets\n", reception.hauteur);
    printf("Nb plan :%u\n", reception.nbPlan);
    printf("Bit par pixel : %u\n", reception.bitParPixel);
    printf("Type compression : %u\n", reception.typeCompression);
    printf("Taille image: %u\n", reception.tailleImage);
    printf("Resolution horizontal : %u\n", reception.resolutionHorizontale);
    printf("Resolution Verticale : %u\n", reception.resolutionVerticale);
    printf("Nb couleurs utilisees: %u\n", reception.nbCouleursUtilisees);
    printf("Nb couleur importantes: %u\n", reception.nbCouleurImportantes);
}

void decompressBmp(char *fichierSource, char *fichierACreer) {
    FILE *ficSource;
    FILE *ficDestination;
    typeEnTeteFichierBmp enteteFichier;
    typeEnTeteImageBmp enteteImage;
    int retour;
    int cptr;
    unsigned char nbRepetition, tailleFichier, tailleImage, typeCompression;
    unsigned char valeurOctet;
    unsigned char nbOctet;
    unsigned int nbTotalOctetImage = 0;
    couleur paletteCouleur[256];

    printf("Decompression\n");
    printf("Source: %s\n", fichierSource);
    printf("Destination: %s\n", fichierACreer);

    // ouverture des fichiers source & destination 
    ficSource = fopen(fichierSource, "r");
    if (ficSource == NULL) {
        printf("erreur d'ouverture : %s", strerror(errno));
        exit(errno);
    }
    ficDestination = fopen(fichierACreer, "w+");
    if (ficSource == NULL) {
        printf("erreur d'ouverture : %s", strerror(errno));
        exit(errno);
    }

    // copie des octets de l'entête et de la palette de couleurs de source vers destination 
    retour = fread(&enteteFichier, sizeof (enteteFichier), 1, ficSource);
    if (retour != 1) {
        printf("erreur");
        fclose(ficSource);
        fclose(ficDestination);
    }

    retour = fwrite(&enteteFichier, sizeof (enteteFichier), 1, ficDestination);
    if (retour != 1) {
        printf("erreur");
        fclose(ficSource);
        fclose(ficDestination);
    }

    retour = fread(&enteteImage, sizeof (enteteImage), 1, ficSource);
    if (retour != 1) {
        printf("erreur");
        fclose(ficSource);
        fclose(ficDestination);
    }

    retour = fwrite(&enteteImage, sizeof (enteteImage), 1, ficDestination);
    if (retour != 1) {
        printf("erreur");
        fclose(ficSource);
        fclose(ficDestination);
    }

    retour = fread(&paletteCouleur, sizeof (couleur), 1, ficSource);
    if (retour != 1) {
        printf("erreur\n");
        fclose(ficSource);
        fclose(ficDestination);
    }

    retour = fwrite(&paletteCouleur, sizeof (couleur), 1, ficDestination);
    if (retour != 1) {
        printf("erreur");
        fclose(ficSource);
        fclose(ficDestination);
    }

    // condition faire 
    do {
        retour = fread(&nbRepetition, sizeof (nbRepetition), 1, ficSource);
        if (retour == 1) {
            retour = fread(&valeurOctet, sizeof (valeurOctet), 1, ficSource);
            for (nbOctet = 0; nbOctet < (unsigned int) nbRepetition; nbOctet++) {
                retour = fwrite(&valeurOctet, sizeof (valeurOctet), 1, ficDestination);
                if (retour != 1) {
                    printf("erreur de lecture %s \n", strerror(errno));
                    exit(errno);
                }
            }
        } else {
            if (!feof(ficSource)) {
                printf("erreur de lecture %s \n", strerror(errno));
                exit(errno);
            }
        }
    } while (nbRepetition != 00 || valeurOctet != 01);

    if (retour == EOF) {
        printf("erreur fermeture source : %s", strerror(errno));
        exit(errno);
    }
    fclose(ficSource);

    tailleFichier = sizeof(enteteFichier) + sizeof (enteteImage) + NBCOULEURS * 4 + (enteteImage.hauteur)*(enteteImage.largeur);
    tailleImage = (enteteImage.hauteur)*(enteteImage.largeur);
    printf("\nTaille du fichier : %d\n", tailleFichier);
    printf("\nTaille de l'image : %d\n", tailleImage);

    //mise à jour de la taille du fichier
    fseek(ficDestination, 2, SEEK_SET);
    retour = fwrite(&tailleFichier, sizeof (unsigned int), 1, ficDestination);
    if (retour != 1) {
        printf("erreur écriture %s\n", strerror(errno));
        exit(errno);
    }

    //type de compression
    fseek(ficDestination, 0x1E, SEEK_SET);
    typeCompression = 0;
    retour = fwrite(&typeCompression, sizeof (unsigned int), 1, ficDestination);
    if (retour != 1) {
        printf("erreur écriture %s\n", strerror(errno));
        exit(errno);
    }

    // mise à jour taille image 
    fseek(ficDestination, 0x22, SEEK_SET);
    retour = fwrite(&tailleImage, sizeof (unsigned int), 1, ficDestination);
    if (retour != 1) {
        printf("erreur écriture %s\n", strerror(errno));
        exit(errno);
    }
    retour = fclose(ficDestination);
    if (retour = EOF) {
        printf("Erreur fermeture fichier destination %s\n", strerror(errno));
        exit(errno);
    }

} 
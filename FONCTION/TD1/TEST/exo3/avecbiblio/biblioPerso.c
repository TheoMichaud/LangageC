#include <stdio.h>
#include <stdlib.h>



float additionReels(float v1, float v2)
    {
        float resultat;
        resultat=v1+v2;
        return resultat;
    }


void afficherMenu(unsigned char sexe)
    {
        if (sexe=='f')
        {
            printf("menu pour femme \n");
        }
        if (sexe=='h')
        {
            printf("menu pour homme \n");
        }
    }

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LARGEUR 80
#define HAUTEUR 40

int main()
{

    int tabPlan[LARGEUR][HAUTEUR];
    int i,j,cpt;

    int rapport=LARGEUR/(4*M_PI);
    int iReel,jReel,x,y;


    for(i=0; i<LARGEUR; i++){

        for(j=0; j<HAUTEUR; j++){

            tabPlan[i][j]=cpt;
            printf(" ",tabPlan[i][j]);
            cpt++;
        }
        printf("\n");
    }



    do{

        jReel=sin(iReel);
        j=(HAUTEUR/2)+(rapport*jReel);

        i=iReel*rapport;
        iReel=iReel+0.01;

        tabPlan[j][i]='*';




    }while(iReel<=(4*M_PI));


    for(i=0; i<HAUTEUR; i++){

        for(j=0; j<LARGEUR; j++){

            printf("%c",tabPlan[j][i]);
        }
        printf("\n");
    }


    return 0;
}



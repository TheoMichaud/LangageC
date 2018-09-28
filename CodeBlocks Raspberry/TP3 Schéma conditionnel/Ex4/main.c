#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

int main()
{

    InitialiserLeds();
/*
    Allumer(0,0,ROUGE);     Allumer(0,7,ROUGE);
    Allumer(1,1,ROUGE);     Allumer(1,6,ROUGE);
    Allumer(2,2,ROUGE);     Allumer(2,5,ROUGE);
    Allumer(3,3,ROUGE);     Allumer(3,4,ROUGE);
    Allumer(4,4,ROUGE);     Allumer(4,3,ROUGE);
    Allumer(5,5,ROUGE);     Allumer(5,2,ROUGE);
    Allumer(6,6,ROUGE);     Allumer(6,1,ROUGE);
    Allumer(7,7,ROUGE);     Allumer(7,0,ROUGE);
*/
    int ligne,colonne;

printf("Exo n°4 du TP 3 \n");


       for(ligne = 0; ligne <= 7; ligne++)      /**pour ligne allant de 0 à 7**/
       {
            colonne = ligne;
            Allumer(ligne,colonne,ROUGE);
            Allumer(ligne,7-colonne,ROUGE);


       }


    return 0;
}


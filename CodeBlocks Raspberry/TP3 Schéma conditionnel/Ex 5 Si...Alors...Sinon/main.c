#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

int main()
{
    int ligne,colonne,fin;

printf("Exo n°5 du TP 3 \n");


    InitialiserLeds();

while(1) {

    for(fin=2; fin<=7; fin++){


        for(ligne = 0; ligne < fin; ligne++)    /**pour colonne allant de 0 à ligne**/
            {
            colonne = ligne;
            Allumer(ligne,colonne,ORANGE);
            Allumer(ligne,fin,ORANGE);
            Allumer(fin,ligne,ORANGE);
            }

        Allumer(fin,fin,ORANGE);



        sleep(1);



        Effacer();

}


}

    return 0;
}

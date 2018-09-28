#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>

int main()
{
    int ligne,colonne,touche;
    InitialiserLeds();
    InitialiserJoystick();

    do
    {
       for(ligne = 0; ligne <= 7; ligne++)      /**pour ligne allant de 0 à 7**/
       {
           for(colonne = 0; colonne <= ligne; colonne++)    /**pour colonne allant de 0 à ligne**/
           {
               Allumer(ligne,colonne,BLEU);
               Allumer(colonne,ligne,BLEU);
           }
           usleep(200000);          /**dormir 200ms**/
           Effacer();
       }
       touche = ScannerJoystick();
    }while(touche !=KEY_ENTER);

    return 0;
}

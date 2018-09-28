#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

int main()
{
    int i,j;

    InitialiserLeds();
    while(1){
        for(i=0; i<=7; i++){

            for(j=0;j<=7;j++)
            {
            Allumer(i,j,ORANGE);
            Allumer(j,i,ORANGE);
            }


        usleep(100000);     /** Temporisation de 1/10 de seconde **/



        Effacer();
        }




    }


    return 0;
}

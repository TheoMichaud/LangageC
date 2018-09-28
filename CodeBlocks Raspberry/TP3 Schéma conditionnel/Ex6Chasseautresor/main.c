#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

#define FAUX 0
#define VRAI 1

int main()
{
    int posX = rand()%8;
    int posY = rand()%8;
    int touche;
    int sortie = FAUX;
    int tresorX = 2;
    int tresorY = 6;

    int score = 0;

    time_t debut;
    time_t fin;

    debut = time(NULL);




    InitialiserLeds();
    InitialiserJoystick();

do
    {
        Allumer(posX,posY,ROUGE);
        Allumer(tresorX,tresorY,ORANGE);



        touche = ScannerJoystick();


        switch(touche)
        {
        case KEY_ENTER:
            sortie = VRAI;
            break;
        case KEY_RIGHT:
            posY++;
            if(posY>7){posY=7; }
            break;
        case KEY_LEFT:
            posY--;
            if(posY<0){posY=0; }
            break;
        case KEY_UP:
            posX--;
            if(posX<0){posX=0; }
            break;
        case KEY_DOWN:
            posX++;
            if(posX>7){posX=7; }
            break;

        }Effacer();

if ((posX == tresorX) && (posY == tresorY)){

    Allumer(tresorX,tresorY,NOIR);

    if ((posX == tresorX) && (posY == tresorY))
    {
        score = score+1;
        srand(time(NULL)) ;
        Allumer(posX,posY,VERT);
        sleep(1);
        tresorX=rand()%8;
        tresorY=rand()%8;
         printf("Votre score est de %d\n",score);
    }

}

    } while(score < 5);

     fin = time(NULL);
    int duree=(int) (fin-debut);

     printf("Vous avez eu le tresor en %s s",duree);



    return 0;
}

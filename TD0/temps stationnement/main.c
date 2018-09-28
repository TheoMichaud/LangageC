#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ha,ma,hd,md,minutes;
    float tarif;

    printf("Entrer l'heure d'arrivée ex : 12 30\n");
    scanf("%d %d",&ha,&ma);

    printf("Entrer l'heure de départ ex : 12 30\n");
    scanf("%d %d",&hd,&md);

    minutes=(hd*60+md)-(ha*60+ma);





    if(minutes<=60){
        tarif=0;
        printf("GRATUIT : %f\n",tarif);
    }
    else
    if((minutes>=61) && (minutes<=150)){
        tarif= ((minutes-60)/15)*0.5;
        printf("Le prix est de : %f\n",tarif);
    }
    else
    if((minutes>=151) && (minutes<=180)){
        tarif= ((minutes-150)/15)*0.4+3;
        printf("Le prix est de : %f\n",tarif);
    }
    else
    if((minutes>=181) && (minutes<=420)){
        tarif= ((minutes-180)/15)*0.2+3.8;
        printf("Le prix est de : %f\n",tarif);
    }
    else
    if(minutes>421){
        tarif= ((minutes-420)/15)*0.1+3.8;
        printf("Le prix est de : %f\n",tarif);
    }






/*
        du 1er au 4ème 			gratuit : 0-60
        du 5ème au 10ème 		0,50€   : 61-150    :3euros
        du 11ème au 12ème  		0,40€   : 151-180   :0.8€
        du 13ème au 28ème 		0,20€   : 181-420   :3.2€
                                        + 0,10€ les suivants    421 +++

*/













    return 0;
}

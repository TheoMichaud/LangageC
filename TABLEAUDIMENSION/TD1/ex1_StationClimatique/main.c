#include <stdio.h>
#include <stdlib.h>

#define MINMAX 2
#define NBJOURS 31

int main()
{
    //  int TemperatureMin[NBJOURS]= {5,6,10,7,10,35,10,2,3,3,2,3,5,8,7,5,25,11,11,10,10,13,15,7,4,3,1,3,2,-5,0};
    //int TemperatureMax[NBJOURS]= {10,12,25,14,17,-20,17,4,5,7,3,6,11,16,14,10,9,22,23,17,20,22,30,13,8,7,3,6,4,0,1};
    int i,j;
    int tempMin, tempMax;
    int indiceJourMin , indiceJourMax;
    int tab[MINMAX][NBJOURS]=
    {
        {5,6,10,7,10,35,10,2,3,3,2,3,5,8,-20,5,25,11,11,10,10,13,15,7,4,3,1,3,2,-5,0},
        {10,12,25,14,17,-20,17,4,5,7,3,6,11,16,14,10,9,22,23,17,20,22,30,13,8,7,3,6,4,0,1}
    };

//printf("Temp min et max du jour sont : %d , %d\n",tab[0][1],tab[1][1]);


    for(i=0; i<NBJOURS; i++)
    {

        printf("Temp min et max du jour %d sont : %d , %d\n",i+1,tab[0][i],tab[1][i]);

    }

    printf("\n");

    for(i=0; i<NBJOURS; i++)
    {
        if(tab[0][i]<tempMin)
        {
            tempMin=tab[0][i];
            indiceJourMin=i;
        }
        if(tab[1][i]>tempMax)
        {
            tempMax=tab[1][i];
            indiceJourMax=i;
        }
    }

 printf("Le jour ou la temperature est la plus faible est le jour %d -> MAX : %d, MIN : %d   \n",indiceJourMin+1,tab[0][indiceJourMin],tab[1][indiceJourMin]);
 printf("Le jour ou la temperature est la plus élevée est le jour %d -> MAX : %d, MIN : %d   \n",indiceJourMax+1,tab[0][indiceJourMax],tab[1][indiceJourMax]);






    return 0;
}



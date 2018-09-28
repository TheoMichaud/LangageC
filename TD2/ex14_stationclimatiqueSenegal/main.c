#include <stdio.h>
#include <stdlib.h>

int main()
{
int min;
int max;
float moymax=0;
float moymin=0;
int sommax=0;
int sommin=0;
int nbmin=0;
int nbmax=0;
int nbrlacune=0;
int pourcent;
int nbtotal=0;


       do{

            printf("la temperature min est \n");
            scanf("%d",&min);
            printf("la temperature max est \n");
            scanf("%d",&max);



            if (min!=0){
                sommin=sommin+min;
                nbmin=nbmin+1;
                }
            else{
                nbrlacune=nbrlacune+1;
            }


            if (max!=0){
                sommax=sommax+max;
                nbmax=nbmax+1;
                }
                else{
                nbrlacune=nbrlacune+1;
            }


nbtotal++;

        }
         while(max!=0 || min!=0);


        moymax=(float)sommax/nbmax;
        moymin=(float)sommin/nbmin;
        nbrlacune=nbrlacune-2;

        nbtotal=(nbtotal-1)*2;
        pourcent=(nbrlacune*100)/nbtotal;


        printf("nombre de valeur manquante est %d\n",nbrlacune);
        printf("moyenne min est %.2f\n",moymin);
        printf("moyenne max est %.2f\n",moymax);
        printf("poucentage est %d",pourcent);
        printf("\n");
        return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/timeb.h>
#include <math.h>
#include <ctype.h>
#include <unistd.h>
#include <time.h>
#define NBPSEUDOMAX 255
#define CHIFFRE 4


// attendre un maxTime millisecondes
void msleep(unsigned int maxTime)
{
    /*
    struct timespec {
    time_t tv_sec;        // secondes
    long   tv_nsec;       // nanosecondes
};
    */
   struct timespec req;
   struct timespec rem;
   time_t secondes=0;
   long nanoSecondes=0;
   if (maxTime>=1000)
   {
       do
       {
           secondes++;
           maxTime-=1000;
       }while(maxTime>=1000);
   }
   nanoSecondes=maxTime*1000000;
   req.tv_sec=secondes;
   req.tv_nsec=nanoSecondes;
   nanosleep(&req,&rem);

}

//retourne une valeur entiere E[0..maxAlea[
unsigned int aleatoire(unsigned int maxAlea )
{
    /* struct timeb {
        time_t         time;
        unsigned short millitm;
        short          timezone;
        short          dstflag;
    };*/

   struct timeb t;
	float a, b ;
	unsigned int nbmilli;
	ftime( &t );
	nbmilli = t.time * 1000 + t.millitm;
	srand( nbmilli );
	a = rand();
	b = ( maxAlea * a ) / RAND_MAX;
	msleep(250);
	return( ( unsigned int )b );


}




int main()
{
    int valAlea[CHIFFRE];
    int indice;
    int valeur[CHIFFRE];
    char pseudo[NBPSEUDOMAX];
    int trouve;
    int nbProposition = 0;
    int bienPlace = 0;
    char choixFinal;
    int nbMalPlace = 4;


    printf("Donnez votre pseudo : ");
    scanf("%s",pseudo);
    printf("Bonjour %s\n",pseudo);
    do
    {
/**Affichage de la valeur aléatoire  -->  4 valeurs**/

    valAlea[0]=aleatoire(9);
    valAlea[1]=aleatoire(9);
    valAlea[2]=aleatoire(9);
    valAlea[3]=aleatoire(9);

    printf("La valeur aléatoire est : ");

        for (indice=0;indice<CHIFFRE;indice++) printf("%d",valAlea[indice]);printf("\n");

/**Saisie des chiffres du joueur**/

        printf("Vous devez donner 4 chiffres compris entre 0 et 9 \n");
do
{
    for (indice=0; indice<CHIFFRE; indice++)
    {

        do
        {
            printf("Chiffre %d : ",indice+1);
            scanf("%d",&valeur[indice]);

        }
        while (valeur[indice]<0 || valeur[indice]>9);
    }
        trouve=1;
    nbProposition=nbProposition+1;


printf("Votre proposition est : ");
bienPlace=0;
nbMalPlace=4;

/**Comparaison valeur du joueur et val aléatoire**/

    for (indice=0; indice<CHIFFRE; indice++)
    {
printf("%d",valeur[indice]);



        if (valeur[indice]!=valAlea[indice])
        {
            trouve=0;

        }


        else{

            bienPlace=bienPlace+1;

        }


    }
printf("\n");

                nbMalPlace=nbMalPlace+1;

/**Si la combinaison est fausse**/

        if(trouve==0){
            printf("Ce n'est pas la bonne combinaison\n");
            printf("Vous avez %d valeurs bien placées !\n",bienPlace);
            printf("Vous avez %d valeurs présentent mais mal placées !\n",nbMalPlace);
        }
}

/**Si la combinaison est vraie**/

        while(trouve!=1);



        printf("C'est la bonne combinaison\n");
        printf("Vous avez eu besoin de %d propositions, BRAVO %s !\n",nbProposition,pseudo);



/**Choix d'une autre partie ou non**/
        do
        {
            printf("Voulez vous faire une autre partie (o/n)? ");
            scanf(" %c",&choixFinal);
        }
        while(choixFinal!='o' && choixFinal!='n');

        }
    while(choixFinal=='o');



    if (choixFinal=='n'){
        printf("Merci d'avoir joué !\n");
        printf("A bientôt %s",pseudo);
    }

    return 0;
}


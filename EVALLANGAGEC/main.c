#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/timeb.h>
#include <math.h>
#include <ctype.h>
#include <unistd.h>
#include <time.h>


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
    int valAlea; 
    valAlea=aleatoire(9);
    printf("la valeur aleatoire est : %d \n",valAlea);
   return 0;
}

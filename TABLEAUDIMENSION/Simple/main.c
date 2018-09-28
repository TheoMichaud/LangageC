#include <stdio.h>
#include <stdlib.h>
#define NBCOL 10
#define NBLIGNE 6

int main()
{
    int tab[NBCOL][NBLIGNE];
    int col,ligne,cpt=0;

    tab[3][2]=56;

    printf("valeur en colonne 3 ligne 2 : %d\n",tab[3][2]);

/**            Version longue et pas optimisée          **/
tab[0][0]=0;
tab[1][0]=0;
tab[2][0]=0;
tab[3][0]=0;
tab[4][0]=0;



/**           Version je sais un peu programmer         **/

    for (ligne=0;ligne<NBLIGNE;ligne++)
    {
       for(col=0; col<NBCOL; col++)
        {
            tab[col][ligne]=0;
        }
    }
/**         Affichage de la ligne 0 du tableau
    for(col=0; col<NBCOL; col++)
    {
        printf("%d",tab[col][1]);
    }
            Affichage de la ligne 1 du tableau          **/
/**         Affichage de la ligne 2 du tableau          **/
/**         Affichage de chaque ligne du tableau        **/
    for (ligne=0;ligne<NBLIGNE;ligne++)
    {
       for(col=0; col<NBCOL; col++)
        {
            printf("  %d",tab[col][ligne]);
        }
        printf("\n");
    }

    return 0;
}



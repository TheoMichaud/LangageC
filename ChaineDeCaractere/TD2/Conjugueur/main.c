#include <stdio.h>
#include <stdlib.h>

int main()
{
    char verbe[50];
    char Je[20]="e";
    char Tu[20]="es";
    char Il[20]="e";
    char Nous[20]="ons";
    char Vous[20]="ez";
    char Ils[20]="ent";
    int longueur;

    printf("Saisir un verbe, à l'infinitif : ");
    gets(verbe);

    longueur=strlen(verbe);

    if (verbe[strlen(verbe)-2]=='e' || verbe[strlen(verbe)-1]=='r')
    {


        if (strcmp("aller",verbe))
        {



            verbe[longueur-2]='\0';     /* Couper la terminaison 'er'. */


            if(verbe[0]=='a' || verbe[0]=='e' || verbe[0]=='i' || verbe[0]=='o' || verbe[0]=='u' || verbe[0]=='y' )
            {

                printf("J'            %s%s \n",verbe,Je);

            }

            else
            {
                printf("Je            %s%s \n",verbe,Je);
            }

            printf("Tu            %s%s \n",verbe,Tu);
            printf("Il/Elle       %s%s \n",verbe,Il);


            if(verbe[strlen(verbe)-1]=='g')
            {

                printf("Nous        %se%s \n",verbe,Nous);

            }

            else
            {
                printf("Nous          %s%s \n",verbe,Nous);
            }


            printf("Vous          %s%s \n",verbe,Vous);
            printf("Ils/Elles     %s%s \n",verbe,Ils);




        }

        else
        {
            printf("ALLER n'est pas un verbe du 1er groupe");
        }
    }
    else
    {
        printf("Ce n'est pas un verbe du 1er groupe");
    }

    return 0;
}

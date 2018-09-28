#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1 ;
    char choixMenu;

    printf("Entrer une lettre (A,B,C,D ou E) : \n");
    scanf("%c", &choixMenu);

 switch(choixMenu)
    {
                     case 'A':
                          printf("[16..20] \n");

                          break;
                     case 'B':
                          printf("[12..16[ \n");

                          break;
                     case 'C':
                          printf("[8..12[ \n");

                          break;
                     case 'D':
                          printf("[4..8[ \n");

                          break;
                     case 'E':
                          printf("[0..4[ \n");

                          break;

    }

    return 0;
}

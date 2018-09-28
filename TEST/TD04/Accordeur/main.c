#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char phrase[200];
    char inter[200] = {'\0'};
    char fin[200] = {'\0'};
    int i;  //Pour parcourir la phrase
    int j;  //Pour parcourir le mot qui suit la cle (les ou des)
    int k;  //Pour copier le mot de la phrase dans 'inter'
    int l;  //Pour creer la nouvelle phrase
    int m;  //Idem 'l'
    int n; //selection de la cle
    int cpt;
    printf("Saisir une phrase : ");
    gets(phrase);

/* ------------------------- Convertion de la phrase en miniscule (plus simple pour les tests à suivre) ------------------------- */
    for(i=0; phrase[i]!='\0'; i++){
        if(phrase[i]>=65 && phrase[i]<=90){
            phrase[i]=phrase[i]+32;
        }
    }
/* ------------------------------------------------------------------------------------------------------------------------------ */

    i=0;    //Reinitialisation de l'indice

    do{
/* ------------------------------------------------ Cas ou je suis sur un 'les' ------------------------------------------------ */
        if(phrase[i] == 'l' && phrase[i+1] == 'e' && phrase[i+2] == 's'){
            k=0;
            if(!(phrase[i-1] >= 97 && phrase[i-1] <=122)){      //Quel caractere avant ?
                if(!(phrase[i+3] >= 97 && phrase[i+3] <=122)){  //Quel caractere apres ?
                    for(j=i+4; phrase[j] != ' ' && phrase[j] != '\0'; j++){
                        inter[k] = phrase[j];
                        k++;
                    }
                    if(phrase[j-1] != 's'){
                        inter[k] = 's';
                        inter[k+1] = '\0';
                    }
                }
            }
            cpt=strlen(inter-1);
        }
/* ----------------------------------------------------------------------------------------------------------------------------- */

        else{
/* ------------------------------------------------ Cas ou je suis sur un 'des' ------------------------------------------------ */
            if(phrase[i] == 'd' && phrase[i+1] == 'e' && phrase[i+2] == 's'){
                k=0;
                if(!(phrase[i-1] >= 97 && phrase[i-1] <=122)){      //Quel caractère avant ?
                    if(!(phrase[i+3] >= 97 && phrase[i+3] <=122)){  //Quel caractere apres ?
                        for(j=i+4, n=i; phrase[j] != ' ' && phrase[j] != '\0'; j++, n++){
                            inter[k] = phrase[n];
                            k++;
                        }
                        if(phrase[j-1] != 's'){
                            inter[k] = 's';
                            inter[k+1] = '\0';
                        }
                    }
                }
                cpt=strlen(inter-1);
            }
/* ---------------------------------------------------------------------------------------------------------------------------- */

/* ---------------------------------------------------- Autres cas ------------------------------------------------------------ */
            else{
                k=0;
                inter[k] = phrase[i];
                cpt=1;
            }
/* ---------------------------------------------------------------------------------------------------------------------------- */
        }
/*  ---------------------------------- Copie du mot intermediaire dans la phrase finale --------------------------------------- */
        for(l=strlen(fin), m=0; m<strlen(inter); l++, m++){
            fin[l] = inter[m];
        }
/* ---------------------------------------------------------------------------------------------------------------------------- */

        i+=cpt;
    }while(phrase[i] != 0);

    printf("%s", fin);
    return 0;
}

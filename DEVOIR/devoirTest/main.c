#include <stdio.h>
#include <stdlib.h>
#include "treasurequest.h"

int main() {
    char monde[LARGEUR][HAUTEUR];
    int i;
    int x, y; // position du joueur
    int sortie = 1;
    int tresor = 0;
    unsigned char dir;
    char choix;
    unsigned int etage = 1;
    typePersonnage *joueur;
    typePersonnage *adversaire;
    // creation personnage
    joueur = creerPersonnage();
    afficherPersonnage(joueur);

    do// boucle jeu
    {

        do // boucle etage courant
        {
            initMonde(monde, 10, 2, 2); // 30 monstres, 2 potions et 8 pieges
            x = LARGEUR / 2;
            y = HAUTEUR / 2;
            sortie = 1;
            tresor = 0;

            do {
                printf("Etage %u\n",etage);
                afficheMonde(monde, x, y);
                printf(JAUNE);
                printf(" Vie[%d/%u] ", joueur->pv, joueur->pvMax);
                printf(BLANC);


                //le tresor de l'etage n'a pas encore ete trouve, afficher distance du tresor
                if (tresor == 0) {
                    printf("(tresor a %.1f m)\n", getDistance(x, y, getXTresor(monde), getYTresor(monde)));
                } else {// le tresor a ete trouve, afficher distance de la sortie
                    printf("(sortie a %.1f m)\n", getDistance(x, y, getXSortie(monde), getYSortie(monde)));
                }

                printf("direction : ");
                scanf(" %c", &dir);

                switch (dir) {

                    case '7':
                        x--;
                        y++;
                        break;

                    case '8':
                        y++;
                        break;

                    case '9':
                        x++;
                        y++;
                        break;

                    case '4':
                        x--;
                        break;

                    case '6':
                        x++;
                        break;

                    case '1':
                        x--;
                        y--;
                        break;

                    case '2':
                        y--;
                        break;

                    case '3':
                        x++;
                        y--;
                        break;
                }
                // gestion des bord de monde
                // si le joueur veut entrer dans le mur
                // il ne change finalement pas de place
                /*
                a completer
                 */
                if (x == LARGEUR) {
                    x = LARGEUR - 1;
                }
                if (x == -1) {
                    x = 0;
                }
                if (y == HAUTEUR) {
                    y = HAUTEUR - 1;
                }
                if (y == -1) {
                    y = 0;
                }

                switch (monde[x][y]) {

                    case MONSTRE:

                        printf(ROUGE);
                        afficheMonstre();
                        adversaire = creerAdversaire(1+etage/5);
                        faireUnDuel(joueur, adversaire);
                        free(adversaire);

                        printf(BLANC);
                        break;

                    case PIEGE:
                        joueur->pv -= PIEGE;
                        printf(ROUGE);
                        affichePiege();
                        printf("un piege!!! vous perdez %d pv\n", PIEGE);
                        printf(BLANC);
                        break;

                    case SORTIE:

                        if (tresor == 1) {
                            sortie = 0;
                        }

                        afficheSortie();
                        printf("La sortie\n");

                        break;

                    case TRESOR:
                        tresor = 1;
                        printf(JAUNE);
                        afficheTresor();
                        printf(BLANC);
                        printf("vous avez trouve le tresor. reste a trouver la sortie\n");

                        break;
                    case POTION:
                        joueur->pv += POTION;
                        printf(VERT);
                        affichePotion();
                        printf("une potion de vie!!! vous gagne %d pv\n", POTION);
                        printf(BLANC);
                        break;
                }

                if (joueur->pv <= 0) {
                    sortie = 0;
                }

            } while (sortie == 1);

            if (joueur->pv <= 0) {
                affichePerdu();
                printf("vous avez perdu\n");
            } else {
                etage++;
                printf("etage %u!!\n", etage);
            }
        } while (etage != 100 && joueur->pv > 0);

        printf("\nUne autre partie (O/N)?");
        scanf(" %c", &choix);
    }    while (choix == 'o' || choix == 'O');
    return 0;
}

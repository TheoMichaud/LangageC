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
    int etage = 1;
    typePersonnage *joueur;
    typePersonnage *adversaire;
    int init = 0;
    // creation personnage
    do {
        printf("1 - Nouveau personnage\n");
        printf("2 - Chargement de la partie\n");
        printf("3 - Quitter\n");
        printf("Votre choix : ");
        scanf(" %c", &choix);
    } while (!(choix >= '1' && choix <= '3'));
    if (choix == '1') {
        joueur = creerPersonnage();
    }
    if (choix == '2') {
        etage = chargement(joueur, monde, &x, &y);
        if (etage != -1) { //chargement ok
            init = 1;

        } else { // pb chargement
            etage = 1;
            joueur = creerPersonnage();
        }
    }
    if (choix == '3') {
        printf("A bientot\n");
        return (EXIT_SUCCESS);
    }
    afficherPersonnage(joueur);


    do// boucle jeu
    {

        do // boucle etage courant
        {
            if (init == 0) {
                initMonde(monde, 10, 2, 2); // 10 monstres, 2 potions et 2 pieges
                x = LARGEUR / 2;
                y = HAUTEUR / 2;
                sortie = 1;
                tresor = 0;
                joueur->pv = joueur->pvMax;
                monde[x][y] = DEJAVISITE;
            } else {
                init = 0;
            }
            do {
                printf("Etage %u\n", etage);
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

                printf("direction (s pour sauvegarder la progression, q pour quitter): ");
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
                    case 's':
                        printf("Sauvegarde du jeu...\n");
                        sauvegarde(joueur, x, y, monde, etage);
                        break;
                    case 'q':
                        printf("Au revoir...\n");
                        return (EXIT_SUCCESS);
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
                        adversaire = creerAdversaire(1 + etage / 5);
                        faireUnDuel(joueur, adversaire);
                        free(adversaire);

                        monde[x][y] = DEJAVISITE;

                        printf(BLANC);
                        break;

                    case PIEGE:
                        joueur->pv -= PIEGE;
                        printf(ROUGE);
                        affichePiege();
                        printf("un piege!!! vous perdez %d pv\n", PIEGE);
                        printf(BLANC);
                        monde[x][y] = DEJAVISITE;
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
                        monde[x][y] = DEJAVISITE;
                        printf("vous avez trouve le tresor. reste a trouver la sortie\n");

                        break;
                    case POTION:
                        joueur->pv += POTION;
                        printf(VERT);
                        affichePotion();
                        printf("une potion de vie!!! vous gagne %d pv\n", POTION);
                        printf(BLANC);
                        monde[x][y] = DEJAVISITE;
                        break;
                    default:
                        monde[x][y] = DEJAVISITE;

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
    } while (choix == 'o' || choix == 'O');
    return 0;
}

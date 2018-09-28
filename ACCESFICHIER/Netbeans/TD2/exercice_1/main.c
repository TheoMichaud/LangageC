#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char** argv) {
    FILE *fic; 
    int largeur; int longueur; int couleur; int retour;
    
    
    // ouverture du fichier
    fic=fopen("/home/USERS/ELEVES/SNIR2017/imgBMP/image256Couleurs.bmp","r"); //"r" mode read, donc lecture seule
    if(fic==NULL)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }
   
    // lecture du fichier
    retour=fseek(fic, 18, SEEK_SET); // 18 correspond au nombre d'octets pris jusqu'à la largeur, SEEK_SET est la fonction qui permet de partir du début du fichier
    if (retour!=0){                  
        printf("%s\n",strerror(errno));
        exit(errno);        
    }
    
    retour = fread (&largeur,sizeof(int),1,fic); // la variable retour est = à la fonction de lecture qui prendre en paramètres l'adresse de la largeur,
                                                
       if (retour==0){ 
        printf("%s\n",strerror(errno));
        exit(errno);        
    }
     retour = fread (&longueur,sizeof(int),1,fic);// la variable retour est = à la fonction de lecture qui prendre en paramètres l'adresse de la longueur
                                                 // ,1 correspond au nombre de déplacement(s), la taille, le fichier
       if (retour==0){
        printf("%s\n",strerror(errno));
        exit(errno);        
    }

         retour=fseek(fic, 20, SEEK_CUR); // fseek permet de se déplacer dans le fichier même; fic correspond au fichier, 
                                         
                                        
    if (retour!=0){
        printf("%s\n",strerror(errno));
        exit(errno);        
    }
    
         
    retour = fread (&couleur,sizeof(int),1,fic);// la variable retour est = à la fonction de lecture qui prendre en paramètres l'adresse des couleurs
                                              
       if (retour==0){
        printf("%s\n",strerror(errno));
        exit(errno);        
       }

     printf(" Largeur : %d \n Longueur : %d \n Nombre de couleurs : %d\n",largeur,longueur,couleur);
    
    // fermeture du fichier
    retour=fclose(fic);
    if(retour==EOF)
    {
        printf("%s\n",strerror(errno));
        exit(errno);
    }

    return 0;
    
    return (EXIT_SUCCESS);
}


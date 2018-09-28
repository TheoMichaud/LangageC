#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
  FILE *fic;
  int retour;
  //ouverture du fichier essai.txt en écriture/création
  fic=fopen("/home/USERS/ELEVES/SNIR2017/mrocher/essais.txt","w+");
  if(fic==NULL)
  {
      printf("pb ouverture : %s\n",strerror(errno));
      exit(errno);
  }
  retour=fputs("bonjour",fic);
  if(retour==EOF)
  {
      printf("pb écriture : %s\n",strerror(errno));
      exit(errno);
  }
  //fermeture du fichier
    retour=fclose(fic);
    if(retour==EOF)
    {
    printf("pb fermeture : %s\n",strerror(errno));
      exit(errno);
    }
}

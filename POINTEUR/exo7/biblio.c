char *saisirChaine(char *chaine)
{
    char *nom;
    char buffer[50];
    printf("%s",chaine);
    printf("%s",chaine);
    printf("%s",buffer);

    nom=(char*)malloc((strlen(buffer)+1)*sizeof(char));

    strcpy(nom,buffer);


   return nom; //retour

}

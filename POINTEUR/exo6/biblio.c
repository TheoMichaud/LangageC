
char *supprimerE(char *chaine)
{
    char tampon[strlen(chaine)+1];
    int n;
    int indice=0;
    //copie de la chaine en memoire tampn sans les e
    for(n=0;n<strlen(chaine);n++)
    {
        if(chaine[n]!='e'){
            tampon[indice++]=chaine[n];
        }
    }
    tampon[indice++]='\0';  //ajout du car null
    //allocation dynamique
    char *chaineRetour;
    chaineRetour=(char*)malloc((indice)*sizeof(char));
    strcpy(chaineRetour,tampon);
    return chaineRetour; //retour

}



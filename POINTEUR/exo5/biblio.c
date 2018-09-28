   char *moisNom(int numeroMois)
   {
        char listeMois[12][10]={"janvier","février","mars","avril","mai","juin","juillet","août","septembre","octobre","novembre","décembre"};

        char *mois;
        mois = (char*)malloc((strlen(listeMois[numeroMois-1])+1)*sizeof(char));
        strcpy(mois,listeMois[numeroMois-1]);
        return mois;

   }

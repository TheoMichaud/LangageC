for(i=0; i<NBTEMP; i++)
    {
        if(tab[0][i]<tempMin)
        {
            tempMin=tab[0][i];
            indiceJourMin=i;
        }
        if(tab[1][i]>tempMax)
        {
            tempMax=tab[1][i];
            indiceJourMax=i;
        }
    }
    printf("Le jour ou la temperature est la plus faible est le jour %d, min : %d, max : %d\n",indiceJourMin+1,tab[0][indiceJourMin],tab[1][indiceJourMin]);



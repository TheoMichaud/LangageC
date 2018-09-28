#include <stdio.h>
#include <stdlib.h>

void afficherFiche(char *nom,char *prenom,char sexe,int age,float taille,float poids){

    printf("fiche recapitulative :\n");
    printf("-Identite : %s %s",prenom,nom);
    printf("\n-Age : %d",age);
    printf("\n-Poids : %.2f",poids);
    printf("\n-Taille : %.2f",taille);
}

void tableauCorpulence(float imc,float taille,float poids){

    imc=(poids)/(taille*taille);

    if(imc<16.5){
        printf("\nVotre IMC est inférieur à 16.5, votre corpulence est qualifiée de famine");
    }
    if(imc>16.5 && imc<18.5){
        printf("\nVotre IMC est entre ]16.5 et 18.5], votre corpulence est qualifiée de maigreur");
    }
    if(imc>18.5 && imc<25.0){
        printf("\nVotre IMC est entre ]18.5 et 25.0], votre corpulence est qualifiée de corpulence normale");
    }
    if(imc>25.0 && imc<30.0){
        printf("\nVotre IMC est entre ]25.0 et 30.0], votre corpulence est qualifiée de surpoids");
    }
    if(imc>30.0 && imc<35.0){
        printf("\nVotre IMC est entre ]30.0.0 et 35.0], votre corpulence est qualifiée de obésité modérée");
    }
    if(imc>35.0 && imc<40.0){
        printf("\nVotre IMC est entre ]35.0 et 40.0], votre corpulence est qualifiée de obésité sévère");
    }
    if(imc>40.0){
        printf("\nVotre IMC est supérieur à 40.0, votre corpulence est qualifiée d'obésité morbide");
    }


}


float Lorentz(float taille,char sexe){
    float poidsIdeal;
    if(sexe=='f'){
        poidsIdeal=(taille*100)-100-(taille*100-150)/2.5;
    }
    else/*(sexe=='h')*/{
        poidsIdeal=(taille*100)-100-(taille*100-150)/4;
    }
    return poidsIdeal;
}

float LorentzAge(int age,float taille){
    float poidsIdeal;
    poidsIdeal=50+((taille*100-150)/4)+((age-20)/4);

    return poidsIdeal;
}

float Devine(float taille,char sexe){
     float poidsIdeal;
    if(sexe=='f'){
        poidsIdeal=45.5+2.3*((taille/0.0254)-60);
    }
    else/*(sexe=='h')*/{
        poidsIdeal=50+2.3*((taille/0.0254)-60);
    }
    return poidsIdeal;
}





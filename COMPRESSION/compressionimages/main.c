/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tmichaud
 *
 * Created on 12 février 2018, 08:15
 */

#include <stdio.h>
#include <stdlib.h>
#include "compression.h"

/*
 * 
 */
int main(int argc, char** argv) {

    //FILE *fic;
    //int retour;
    int i = 0;


    if (argc == 4) {
        printf("valeur de argc %d\n\n", argc);
        for (i = 0; i < argc; i++) {
            printf("argv[%d]: %s  \n", i, argv[i]);
        }

               if(argv[1][0]=='d' || argv[1][0]=='D')
                {
                    decompressBmp(argv[2],argv[3]);
                }
        
            /*
                    if(argv[1][0]=='c' || argv[1][0]=='C')
                    {
                        compressBmp(argv[2],argv[3]);
                    }
             */
        } 
            // else {

       // }
        

        return (EXIT_SUCCESS);
    }


#include <stdio.h>
#include <stdlib.h>

void tofile(float *test){
    FILE* file = NULL;

    file = fopen("result.csv", "a+");
    if(file != NULL){
        // Test ouverture fichier et action réalisées
        float lenSorted = (float) sizeof(test)/sizeof(float);
        //size_t lenExec = sizeof(executionTime)/sizeof(double);  double executionTime[]

        fputs("Tableaux triés;Sortie m/s", file);
        for(int i=0; i<lenSorted;i++){
            fprintf(file,"%f", test[i]);
        }
		// TODO
		/*
			replacer le curseur en haut du fichier
			sauter une ligne
			déclaer avec ; 

		*/
		for(int i=0; i<lenSorted;i++){
            fprintf(file,";%f", test[i]);
        }
    }else{
        printf("L'ouverture du fichier a echouee..");
    }
}
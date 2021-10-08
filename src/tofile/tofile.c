#include <stdio.h>
#include <stdlib.h>

void tofile(float *tab, int lenSorted){
    FILE* file = NULL;

    file = fopen("result.csv", "w");
    if(file != NULL){
        // Test ouverture fichier et action réalisées

        fputs(";Tri par sélection;Tri par insertion;Tri à bulles; Tri par tas\n", file);
        fseek(file, 65, 0);
        fprintf(file, "Sortie (ms)");
        for(int i=0; i<lenSorted;i++){

            fprintf(file,";%1.2f", tab[i]);
        }
    }else{
        printf("L'ouverture du fichier a echouee..");
    }
}
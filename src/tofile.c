#include <stdlib.h>
#include <stdio.h>

void tofile(int sorted[]){
    FILE* file = NULL;

    file = fopen("result.csv", "a+");
    if(file != NULL){
        // Test ouverture fichier et action réalisées
        size_t lenSorted = sizeof(sorted)/sizeof(int);
        //size_t lenExec = sizeof(executionTime)/sizeof(double);  double executionTime[]

        fputs("Tableaux triés\n", file);
        for(int i=0; i<lenSorted;i++){
            fputc(sorted[i], file);
            fputc('\n', file);
        }
    }else{
        printf("L'ouverture du fichier a echouee..");

    }

}
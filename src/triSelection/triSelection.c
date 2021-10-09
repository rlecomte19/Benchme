#include <stdio.h>
#include <stdlib.h>

float *triSelection(float *tableau, int size){
    float *tab = malloc(size*sizeof(float));
    for(int i=0; i<size; i++){
        tab[i] = tableau[i];
    }
    int t;
    for(int i=0; i < size-1; i++){
        for(int j=i+1; j < size; j++){
            if(tab[i] > tab[j]){
                t=tab[i];
                tab[i]=tab[j];
                tab[j]=t; 
            }
        }
    }
    return tab;

}

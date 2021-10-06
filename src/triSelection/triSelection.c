#include <stdio.h>

void triSelection(float *tab, int size){
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
}

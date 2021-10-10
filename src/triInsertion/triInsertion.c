#include <stdio.h>
#include <stdlib.h>

float *triInsertion(float *tableau, int size){
    float tab[size];
    for(int i=0;i<size;i++){
        tab[i] = tableau[i];
    }
    
    for(int i=0;i<size;i++){
        int x = tab[i];
        int j = i;
        while(j > 0 && tab[j-1] > x){
            tab[j] = tab[j-1];
            j--;
        }
        tab[j] = x;
    }

    return tab;
}
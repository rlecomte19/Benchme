#include <stdio.h>
#include <stdlib.h>

void diplayArray(float *tableau, int size){
    for (int i = 0; i < size; i++)
	{
		printf("%.01f ", tableau[i]);
	}
	printf("\n");
}

float *randomFloatArray(int tabsize){ 
	float *tabFloat = malloc(sizeof(float)*tabsize);
	float a = 10000000.0;
	for(int i=0; i<tabsize; i++){
		tabFloat[i] = ((float)rand()/(float)(RAND_MAX)*a);
	}
	return tabFloat;
	
}

void tri_test(float *listArray[], float (*func)(float*,int), int *tabSizes){
	for (int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			func(listArray[i], tabSizes[i]);
		}
	}
}

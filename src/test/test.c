#include <stdio.h>
#include <stdlib.h>

void diplayArray(float *tableau, int size){
    for (int i = 0; i < size; i++)
	{
		printf("%.01f ", tableau[i]);
	}
	printf("\n");
}
void *randomFloatArray(float **listArrays, int *tabsizes, int sizeListArray){ 
	float a = 10000000.0;
	for(int i=0; i<sizeListArray; i++){
		for (int j = 0; j < i+1; j++)
		{
			listArrays[i][j] = ((float)rand()/(float)(RAND_MAX)*a);
		}
	}	
}

void tri_test(float *listArray[], float (*func)(float*,int), int *tabSizes){
	for (int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			func(listArray[i], tabSizes[i]);
		}
	}
}

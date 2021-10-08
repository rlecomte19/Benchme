#include <stdio.h>
#include <stdlib.h>
#include "triSelection/triSelection.h"
#include "tofile/tofile.h"
#include "tri_a_bulle/tri_a_bulle.h"
#include "test/test.h"

float *randomFloatArray(int tabsize);

int main()
{
	
	float test[] = { 1,2,3,4.2 };

	//getCpu(test, timeTaken);


	int lenSorted = (int) sizeof(test)/sizeof(float);
	tofile(test, lenSorted);
	printf("Hello World!\n");
	//tri_a_bulle();

	float *tab;
	tab = randomFloatArray(7);

	
	// tri par sélection 
	for(int i = 0; i < 7 ;i++){
		tab = randomFloatArray(10);
	}
	for(int i = 0; i < 10 ;i++){
		printf("%.0f ", tab[i]);
	}
	printf("\n");
	tab = triSelection(tab, 10);
	for(int i = 0; i < 10 ;i++){
		printf("%.0f ", tab[i]);
	}
	printf("\n");
	
	/*
	// tri à bulle
	float *tabResult = malloc(sizeof(float)*7);
	memcpy(tabResult, tab, sizeof(float)*7);
	
	tri_a_bulle(tabResult, 7);
	
	for(int nJ=0; nJ<7; nJ++)
        printf("%.0f - ", tab[nJ]);
	printf("\n");
	for(int nJ=0; nJ<7; nJ++)
        printf("%.0f - ", tabResult[nJ]);
	*/
	
	// tri par insertion 


}

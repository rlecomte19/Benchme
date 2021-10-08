#include <stdio.h>
#include <stdlib.h>
#include "triSelection/triSelection.h"
#include "tofile/tofile.h"

float *randomFloatArray(int tabsize);

int main()
{
	clock_t start, end;
	double cpu_time_used;
	float test[] = { 1,2,3,4.2 };
	double timeTaken[4];

	//getCpu(test, timeTaken);


	int lenSorted = (int) sizeof(test)/sizeof(float);
	tofile(test, lenSorted);
	printf("Hello World!\n");
	//tri_a_bulle();

	// tri par sélection 
	float *tab;
	tab = randomFloatArray(7);
	for(int i = 0; i < 7 ;i++){
		printf("%.0f ", tab[i]);
	}
	printf("\n");
	tab = triSelection(tab, 7);
	for(int i = 0; i < 7 ;i++){
		printf("%.0f ", tab[i]);
	}
	printf("\n");
	// tri à bulle



	// tri par insertion 


}

/* Génération d'une chaine de float aléatoire */
float *randomFloatArray(int tabsize){ 
	float *tabFloat = malloc(sizeof(float)*tabsize);
	float a = 10000000.0;
	for(int i=0; i<tabsize; i++){
		tabFloat[i] = ((float)rand()/(float)(RAND_MAX)*a);
	}
	return tabFloat;
}
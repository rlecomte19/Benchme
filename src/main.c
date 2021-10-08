#include <stdio.h>
#include <stdlib.h>
#include "triSelection/triSelection.h"
#include "tofile/tofile.h"
#include "tri_a_bulle/tri_a_bulle.h"

float *randomFloatArray(int tabsize);

int main()
{
	//tri_a_bulle();

	float *tab;
	tab = randomFloatArray(7);

	
	// tri par sélection 
	for(int i = 0; i < 7 ;i++){
		printf("%.0f ", tab[i]);
	}
	printf("\n");
	tab = triSelection(tab, 7);
	for(int i = 0; i < 7 ;i++){
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

/* Génération d'une chaine de float aléatoire */
float *randomFloatArray(int tabsize){ 
	float *tabFloat = malloc(sizeof(float)*tabsize);
	float a = 10000000.0;
	for(int i=0; i<tabsize; i++){
		tabFloat[i] = ((float)rand()/(float)(RAND_MAX)*a);
	}
	return tabFloat;
}
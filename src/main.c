#include <stdio.h>
#include <stdlib.h>
#include "triSelection/triSelection.h"
#include "tofile/tofile.h"
#include "test/test.h"

int main()
{
	//tri_a_bulle();

	// tri par sélection 
	float *tab;
	tab = randomFloatArray(10);
	for(int i = 0; i < 10 ;i++){
		printf("%.0f ", tab[i]);
	}
	printf("\n");
	tab = triSelection(tab, 10);
	for(int i = 0; i < 10 ;i++){
		printf("%.0f ", tab[i]);
	}
	printf("\n");
	// tri à bulle



	// tri par insertion 


}

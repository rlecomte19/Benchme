#include <stdio.h>
#include <stdlib.h>
#include "triSelection/triSelection.h"
#include "tofile/tofile.h"
#include "test/test.h"

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

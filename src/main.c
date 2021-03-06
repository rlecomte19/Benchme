#include <stdio.h>
#include "triSelection/triSelection.h"
#include "./triInsertion/triInsertion.h"
#include "./tri_a_bulle/tri_a_bulle.h"
#include "./tri_par_tas/tri_par_tas.h"
#include "./tofile/tofile.h"
#include "./test/test.h"
#include <stdlib.h>
#include <time.h>

int main()
{	
	srand(94);
	int timeTaken[4];
	float arr1[100];
	float arr2[1000];
	float arr3[10000];
	float arr4[100000];
	float arr5[1000000];
	float *arr6 = malloc(sizeof(float) * 10000000);
	int tabSizes[6] = {100, 1000, 10000, 100000, 1000000, 10000000};
	float *listArrays[6] = {arr1, arr2, arr3, arr4, arr5, arr6}; 

	for(int i=0; i<6; i++){
		for (int j = 0; j < tabSizes[i]; j++)
		{		
			listArrays[i][j] = (float)(rand() % 10000000);
		}
	}
	// Remplissage aléatoire des tableaux de différent nombre de valeurs
	randomFloatArray(listArrays, tabSizes, 6);
	getCpu(listArrays, triSelection, tabSizes, timeTaken, 0);
	getCpu(listArrays, triInsertion, tabSizes, timeTaken, 1);
	getCpu(listArrays, tri_a_bulle, tabSizes, timeTaken, 2);
	getCpu(listArrays, tri_par_tas, tabSizes, timeTaken, 3);
	tofile(timeTaken, 4);

}
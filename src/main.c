#include <stdio.h>
#include "triSelection/triSelection.h"
#include "./triInsertion/triInsertion.h"
#include "./tri_a_bulle/tri_a_bulle.h"
#include "./tri_par_tas/tri_par_tas.h"
#include "./tofile/tofile.h"
#include "./getCpu/getCpu.h"

int main()
{
	// float arr1[100];
	// float arr2[1000];
	// float arr3[10000];
	// float arr4[100000];
	// float arr5[1000000];
	// float arr6[10000000];
	// int *tabSizes = { 100, 1000, 10000, 100000, 1000000, 10000000};
	// float *listArrays = { arr1, arr2, arr3, arr4, arr5, arr6 }; 

	float arr7[1];
	float arr8[2];
	float arr9[3];
	float arr10[4];
	float arr11[5];
	float arr12[6];
	int tabSizes2[5] = { 1, 2, 3, 4, 5, 6 };
	float *listTest[5] = { arr7, arr8, arr9, arr10, arr11,arr12};

	for(int i=0; i<=5;i++){
		for(int j=0;j<i+1;j++){
			listTest[i][j] = 4;
			printf("%0.f,", listTest[i][j]);
		}
		printf("\n");
	}
	// Remplissage aléatoire des tableaux de différent nombre de valeurs
	//randomFloat(tabSizes, listArrays);
}
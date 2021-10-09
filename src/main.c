#include <stdio.h>
#include "triSelection/triSelection.h"
#include "./tofile/tofile.h"

int main()
{
	float arr1[100];
	float arr2[1000];
	float arr3[10000];
	float arr4[100000];
	float arr5[1000000];
	float arr6[10000000];
	int *tabSizes = { 100, 1000, 10000, 100000, 1000000, 10000000};
	float *listArrays = { arr1, arr2, arr3, arr4, arr5, arr6 }; 

	// Remplissage aléatoire des tableaux de différent nombre de valeurs
	randomFloat(tabSizes, listArrays);


}
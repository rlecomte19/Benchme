#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Affiche tableau
 * 
 * @param tableau Tableau de float
 * @param size Taille du tableau
 */

void diplayArray(float *tableau, int size){
    for (int i = 0; i < size; i++)
	{
		printf("%.01f ", tableau[i]);
	}
	printf("\n");
}

/**
 * @brief Remplit des tableaux avec des valeurs aléatoire 
 * 
 * @param listArrays Liste des tableaux à remplir  
 * @param tabsizes Liste des tailles des tableaux à remplir
 * @param sizeListArray Taille de ListArrays
 */

void *randomFloatArray(float **listArrays, int *tabsizes, int sizeListArray){ 
	float a = 10000000.0;
	for(int i=0; i<sizeListArray; i++){
		for (int j = 0; j < tabsizes[i]; j++)
		{
			listArrays[i][j] = ((float)rand()/(float)(RAND_MAX)*a);
		}
	}	
}

/**
 * @brief Effectue un test de tri 
 * 
 * @param listArray Liste des tableaux 
 * @param tabSizes Nombre de valeurs dans le tableau
 * @return Tableau trié
 */

void tri_test(float *listArray[], float*(*func)(float*,int), int *tabSizes){
	for (int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			func(listArray[i], tabSizes[i]);
		}
	}
}

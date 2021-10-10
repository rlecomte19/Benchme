#include <time.h>
#include <math.h>
#include "../test/test.h"

void getCpu(float *listArray[], float (*func)(float*,int), int *tabSizes, double *timeTaken){
    clock_t start, end;
	double cpu_time_used;
	//I - TRI PAR SELECTION
	start = clock();
		tri_test(listArray, func, tabSizes);
	end = clock();
	timeTaken[0] = ((double) ((end-start)) / CLOCKS_PER_SEC)* pow(10,6);

	//II - TRI PAR INSERTION
	start = clock();
		tri_test(listArray, func, tabSizes);
	end = clock();
	timeTaken[1] = ((double) ((end-start)) / CLOCKS_PER_SEC)* pow(10,6);

	// III - TRI A BULLES
    start = clock();
		tri_test(listArray, func, tabSizes);
	end = clock();
	timeTaken[2] = ((double) ((end-start)) / CLOCKS_PER_SEC)* pow(10,6);

	// IV - TRI PAR TAS
	start = clock();
		tri_test(listArray, func, tabSizes);
	end = clock();
	timeTaken[3] = ((double) ((end-start)) / CLOCKS_PER_SEC)* pow(10,6);
}

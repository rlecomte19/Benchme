#include <time.h>
#include "../test/test.h"

void getCpu(float *listArray[], float *func(float *,int), int *tabSizes, double *timeTaken, int pos){
    clock_t start, end;
	double cpu_time_used;
	
	start = clock();
		tri_test(listArray, func, tabSizes);
	end = clock();
	timeTaken[pos] = ((double) ((end-start)) / CLOCKS_PER_SEC);
}

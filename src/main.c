#include <stdio.h>
#include <stdlib.h>
#include "triSelection/triSelection.h"
#include "tofile/tofile.h"

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
	return 0;
	
}
#include <stdio.h>
#include "triSelection/triSelection.h"
#include "tofile/tofile.h"

int main()
{
	float test[] = { 1,2,3,4.2 };
	int lenSorted = (int) sizeof(test)/sizeof(float);
	tofile(test, lenSorted);
	printf("Hello World!\n");
	//tri_a_bulle();
	return 0;
	
}
#include <stdio.h>
#include "tofile.c"
#include "triSelection/triSelection.h"

int main()
{
	int test[] = { 1,2,3,4,5 };
	tofile(test);
	printf("Hello World!\n");
	tri_a_bulle();
	return 0;
	
}
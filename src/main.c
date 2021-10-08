#include <stdio.h>
#include "tofile.c"

int main()
{
	int test[] = { 1,2,3,4,5 };
	tofile(test);
	printf("Hello World!\n");
	return 0;
}
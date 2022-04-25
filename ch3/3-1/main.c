// testting binsearch and binsearch2 runtime
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binsearch(int x, int *v, int size);
int binsearch2(int x, int *v, int size);

int main(void) 
{
	clock_t tic;
	clock_t toc;
	double elapsed;
	int v[] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41};
	int size = sizeof(v) / sizeof(int);
	int find = 0;

	tic = clock();	
	binsearch(find, v, size);
	toc = clock();
	elapsed = (double)(toc - tic) * 1000.0 / CLOCKS_PER_SEC;
	printf("binsearch runtime: %g\n", elapsed);
	
	tic = clock();	
	binsearch2(find, v, size);
	toc = clock();
	elapsed = (double)(toc - tic) * 1000.0 / CLOCKS_PER_SEC;
	printf("binsearch2 runtime: %g\n", elapsed);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXLINES 5000

char *lineptr[MAXLINES]; 

int readlines(char *lineptr[], int nlines);
int writelines(char *lineptr[], int nlines);
void mqsort(char *lineptr[], int left, int right);

// sort input lines
int main(void)
{
	clock_t tic;
	clock_t toc;
	double elapsed;
	
	int nlines;

	tic = clock();

	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		mqsort(lineptr, 0, nlines - 1);
		writelines(lineptr, nlines);
	} else {
		printf("error: input too big to sort\n");
		return EXIT_FAILURE;
	}
	toc = clock();
	elapsed = (double)(toc - tic) * 1000.0 / CLOCKS_PER_SEC;
	printf("sort with alloc() runtime: %g ms\n", elapsed);
	return EXIT_SUCCESS;
}	


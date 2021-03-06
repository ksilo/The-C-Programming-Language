/*
 * Filename:    main.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        26-APR-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-7, page 110
 *
 * Rewrite readlines to store lines in an array suplied by main, rather than 
 * calling alloc to maintain storage. How much faster is the program?
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXLINES 5000
#define ARRSIZE 10000

char *lineptr[MAXLINES]; 

int readlines(char *arr, char *lineptr[], int nlines);
int writelines(char *lineptr[], int nlines);
void mqsort(char *lineptr[], int left, int right);

// sort input lines
int main(void)
{
	clock_t tic;
	clock_t toc;
	double elapsed;
	
	int nlines;
	char newarr[ARRSIZE];

	tic = clock();

	if ((nlines = readlines(newarr, lineptr, MAXLINES)) >= 0) {
		mqsort(lineptr, 0, nlines - 1);
		writelines(lineptr, nlines);
	} else {
		printf("error: input too big to sort\n");
		return EXIT_FAILURE;
	}
	toc = clock();
	elapsed = (double)(toc - tic) * 1000.0 / CLOCKS_PER_SEC;
	printf("sort runtime: %g ms\n", elapsed);
	return EXIT_SUCCESS;
}	

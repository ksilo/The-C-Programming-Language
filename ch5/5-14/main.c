/* 
 * Filename:    main.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        09-MAY-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-14, page 121
 *
 * Modify the sort program to handle a -r flagwhich indicates sorting in
 * reverse (decreasing) order. Be sure -r works with -n.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINES 1000		// max lines to be sorted
char *lineptr[MAXLINES];	// pointers to text lines

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines, int reverse);

void mqsort(void *lineptr[], int left, int right,
		int (*comp)(void *, void *));
int mstrcmp(char *, char *);
int numcmp(char *, char *);

// sort input lines
int main(int argc, char *argv[])
{
	int nlines;		// number of input lines to read
	int numeric = 0;	// flag=1 if numeric sort
	int reverse = 0;	// flag=1 if reverse sort
	int c;

	while (--argc > 0 && **++argv == '-')
		while (c = *++argv[0])
			switch(c) {
				case 'n':
					numeric = 1;
					break;
				case 'r':
					reverse = 1;
					break;
				default:
					break;
			}
	
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		mqsort((void **) lineptr, 0, nlines-1,
				(int (*)(void *, void *))(numeric ? numcmp : mstrcmp));
		writelines(lineptr, nlines, reverse);
		return EXIT_SUCCESS;
	} else {
		printf("input too big to sort\n");
		return EXIT_FAILURE;
	}
}


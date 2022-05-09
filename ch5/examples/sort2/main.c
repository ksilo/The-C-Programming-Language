#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINES 1000		// max lines to be sorted
char *lineptr[MAXLINES];		// pointers to text lines

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void mqsort(void *lineptr[], int left, int right,
		int (*comp)(void *, void *));
int mstrcmp(char *, char *);
int numcmp(char *, char *);

// sort input lines
int main(int argc, char *argv[])
{
	int nlines;		// number of input lines to read
	int numeric = 0;	// flag=1 if numeric sort

	if (argc > 1 && strcmp(argv[1], "-n") == 0)
		numeric = 1;
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		mqsort((void **) lineptr, 0, nlines-1,
				(int (*)(void *, void *))(numeric ? numcmp : mstrcmp));
		writelines(lineptr, nlines);
		return EXIT_SUCCESS;
	} else {
		printf("input too big to sort\n");
		return EXIT_FAILURE;
	}
}


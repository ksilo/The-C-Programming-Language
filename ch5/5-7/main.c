#include <stdio.h>
#include <stdlib.h>

#define MAXLINES 5000
#define ARRSIZE 10000

char *lineptr[MAXLINES]; 

int readlines(char *arr, char *lineptr[], int nlines);
int writelines(char *lineptr[], int nlines);
void mqsort(char *lineptr[], int left, int right);

// sort input lines
int main(void)
{
	int nlines;
	char newarr[ARRSIZE];

	if ((nlines = readlines(newarr, lineptr, MAXLINES)) >= 0) {
		mqsort(lineptr, 0, nlines - 1);
		writelines(lineptr, nlines);
		return EXIT_SUCCESS;
	} else {
		printf("error: input too big to sort\n");
		return EXIT_FAILURE;
	}
}


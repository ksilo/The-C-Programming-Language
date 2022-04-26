#include <stdio.h>

// writelines : write outputlines
void writelines(char *lineptr[], int nlines)
{
	puts("--------------------------------");
	while (nlines-- > 0)
		printf("%s\n", *lineptr++);
}

// printarr: simple function for printing arrays
# include <stdio.h>

void printarr(int *n, int size)
{
	int i;
	
	for (i = 0; i < size; i++)
		printf("%d ", n[i]);
	putchar('\n');
}

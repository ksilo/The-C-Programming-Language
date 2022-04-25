#include <stdio.h>
#include <stdlib.h>

void shellsort(int *n, int size);
void printarr(int *n, int size);
int binsearch(int x, int *n, int size);

// testing shelsort and binsearch
int main(void) 
{
	int n[] = {8, 9, 10, 4, 7, 1, 2, 11};
	int size = sizeof(n) / sizeof(int);
	int find;

	puts("unsorted array:");
	printarr(n, size);
	shellsort(n, size);
	puts("sorted array:");
	printarr(n, size);

	puts("------------------------------");

	find = 9;
	printf("binsearch: find %d in sorted array:\n", find);
	printf("found %d\n", binsearch(find, n, size));
	find = 0;
	printf("binsearch: find %d in sorted array:\n", find);
	printf("found %d\n", binsearch(find, n, size));

	return EXIT_SUCCESS;
}

/* The basic idea of Shell sorting algorithm, which was invented in 1959 by 
 * D. L. Shell, is that in early stages, far-apart elements are compared, rather 
 * than adjacent ones as in simpler interchange sorts. This tends to eliminate 
 * large amounts of disorder quickly, so later stages have less work to do. The
 * interval between compared elements is gradually decreased to one, at which 
 * point the sort efectivelly becomes and adjacent interchange method.
 */

// shellsort: sort n[0]...n[n-1] into increasing order
void shellsort(int *n, int size)
{
	int i;
	int j;
	int gap;
	int temp;

	for (gap = size/2; gap > 0; gap /= 2)
		for (i = gap; i < size; i++)
			for (j = i - gap; j >= 0; j -= gap)
				if (n[j] > n[j + gap]) {
					temp = n[j];
					n[j] = n[j+gap];
					n[j+gap] = temp;
				}
}
/* There are three nested loops. The outermost controls the gap between compared
 * elements, shrinking it from n/2 by a factor of two each pass until it becomes
 * zero. The middle loop steps along the elements. The innermost loop compares
 * each pair of elements that is separated by gap and reverses any that are out 
 * of order. Since gap is eventually reduced to one, all elements are eventually 
 * ordered corectlly.
 */

#include <stdio.h>
#include <stdlib.h>

void printarr(int *n, int size)
{
	int i;
	
	for (i = 0; i < size; i++)
		printf("%d ", n[i]);
	putchar('\n');
}

int main(void) 
{
	int n[] = {8, 9, 10, 4, 7, 1, 2, 11};
	int size = sizeof(n) / sizeof(int);

	printarr(n, size);
	shellsort(n, size);
	printarr(n, size);

	return EXIT_SUCCESS;
}

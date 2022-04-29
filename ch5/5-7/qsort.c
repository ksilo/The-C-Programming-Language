/*
 * Filename:    qsort.c
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
#include <string.h>
// qsort: sort v[left]...v[right] into increasing order
void mqsort(char *v[], int left, int right)
{
	int i;
	int last;

	void swap(char *v[], int i, int j);
	int mstrcmp(char *, char *);

	if (left >= right)
		return;
	swap(v, left, (left + right)/2);
	last = left;
	for (i = left+1; i <= right; i++)
		if (mstrcmp(v[i], v[left]) < 0)
			swap(v, ++last, i);
	swap(v, left, last);
	mqsort(v, last+1, right);
	mqsort(v, left, last-1); 
}

/*
 * Filename:    binsearch2.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        25-APR-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 3-1, page 58
 *
 * Our binary search makes two tests inside the loop, when one would suffice
 * (at the price of more tests outside). Write a version with only one test 
 * inside the loop and measure the diferrence in runtime.
 */

// binsearch: find x in v[0] <= v[1] <= ... <= v[n-1]
int binsearch2(int x, int *v, int size)
{
	int low = 0;
	int high = size - 1;
	int mid;

	while(low <= high && x != v[mid]) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	if (x == v[mid])
		return v[mid];
	else
		return -1;
}

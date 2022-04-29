/*
 * Filename:    swap.c
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

// swap: interchange v[i] and v[j]
void swap(char *v[], int i, char j)
{
	char *temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

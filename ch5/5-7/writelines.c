/*
 * Filename:    writelines.c
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
#include <stdio.h>

// writelines : write outputlines
void writelines(char *lineptr[], int nlines)
{
	puts("--------------------------------");
	while (nlines-- > 0)
		printf("%s\n", *lineptr++);
	puts("--------------------------------");
}

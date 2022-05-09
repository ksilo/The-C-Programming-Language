/* 
 * Filename:    expr.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        03-MAY-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-10, page 118
 *
 * Write a program expr, which evaluates a reverse Polish
 * expression from the command line, where each operator or operand is a separate
 * argument. For example 
 *	expr 2 3 4 + *
 * evaluates 2 x (3 + 4)
 */
#include <stdio.h>

// writelines : write outputlines
void writelinesf(char *lineptr[], int nlines)
{
	puts("--------------------------------");
	while (nlines-- > 0)
		printf("%s\n", *lineptr++);
	puts("--------------------------------");
}

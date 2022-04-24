/*
 * Filename:    main.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        28-MAR-2010
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 4-12, page 88 
 *
 * Adapt the ideas of printd to write a recursive version of itoa;
 * that is, convert an integer into a string by calling a recursive routine 
 */

#include <stdio.h>

void itoa(int n, char s[]);

int main() 
{
	char s[12];
	int n = -142345;

	itoa(n, s);
	printf("%s\n", s);
}

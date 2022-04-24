/*
 * Filename:    itoa.c
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

// itoa: converts integer n into string s
void itoa(int n, char s[]) 
{
	static int i = 0; // recursion tracking

	if (n < 0) {
	        n = -n;
	        s[i++] = '-';
	}
	if (n / 10) 
		itoa(n / 10, s);
	s[i++] = n % 10 + '0';
	s[i] = '\0';
}

/*
 * Filename:    strcmp.c
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

// strcmp: return <0 if d<s, 0 if d==s, >0 if d>s
int mstrcmp(char *d, char *s)
{
	for ( ; *d == *s; *d++, *s++)
		if (*d == '\0')
			return 0;
	return *d - *s;
}

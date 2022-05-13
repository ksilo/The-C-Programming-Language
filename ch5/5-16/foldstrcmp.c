/* 
 * Filename:    main.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        09-MAY-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-15, page 121
 *
 * Add the option -f to fold upper ans lower case together, so that case 
 * distinctions are not made during sorting: for example, a and A compare
 * equal.
 */
#include <ctype.h>

// strcmp: return <0 if d<s, 0 if d==s, >0 if d>s
int foldstrcmp(char *d, char *s)
{
	for ( ; tolower(*d) == tolower(*s); *d++, *s++)
		if (*d == '\0')
			return 0;
	return tolower(*d) - tolower(*s);
}

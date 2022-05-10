#include <stdio.h>
#include <ctype.h>

int mgetline(char *s, int lim, int lower)
{
	int c;
	char *p = s;

	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		*p++ = c;
	if (c == '\n')
		*p++ = c;
	*p = '\0';
	return p - s;
}


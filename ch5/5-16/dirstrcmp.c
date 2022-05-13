#include <ctype.h>

int dirstrcmp(char *s, char *t)
{
	extern int dir;
	extern int fold;

	char a;
	char b;

	do {
	
	if (dir)
		while(!isalnum(*s) && *s != ' ' && *s != '\0')
			*s++;
		while(!isalnum(*t) && *t != ' ' && *t != '\0')
			*t++;
		
		a = fold ? tolower(*s) : *s;
		*s++;
		b = fold ? tolower(*t) : *t;
		*t++;

		if (a == b && *s == '\0')
			return 0;
		
	} while (a == b);
		return a - b;
}


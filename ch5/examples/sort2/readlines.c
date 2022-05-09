#include <stdio.h>

#define MAXLEN 1000		// max length of any input line

int mgetline(char *, int);
char *alloc(int);
void mstrcpy(char *, char *);

// readlines: read input lines
int readlines(char *lineptr[], int maxlines)
{
	int len;		
	int nlines = 0;		// number of input lines read
	char line[MAXLEN];
	char *p;

	while ((len = mgetline(line, MAXLEN)) > 0)
		if ((nlines >= maxlines) || (p = alloc(len)) == NULL)
			return -1;
		else {
			line[len-1] = '\0';
			mstrcpy(p, line);
			lineptr[nlines++] = p;
		}
	return nlines;
}	



/*
 * Filename:    readlines.c
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

#define MAXLEN 1000		// max length of any input line

int mgetline(char *, int);
void mstrcpy(char *, char *);

// readlines: read input lines
int readlines(char *arr, char *lineptr[], int maxlines)
{
	int len;		
	int nlines = 0;		// number of input lines read
	char line[MAXLEN];
	char *p = arr;

	while ((len = mgetline(line, MAXLEN)) > 0)
		if (nlines >= maxlines)
			return -1;
		else {
			line[len-1] = '\0';
			p += len;
			mstrcpy(p, line);
			lineptr[nlines++] = p;
		}
	return nlines;
}	



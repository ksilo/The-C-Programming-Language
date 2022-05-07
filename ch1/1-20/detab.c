/* 
 * Filename:    detab.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        06-MAY-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 1-20, page 34
 *
 * Write a program detab that replces tabs in the input with the proper 
 * number of blanks to space to the next tab stop. Assume a fixed set 
 * of tab stop, say every n columns. Should n be a variable or a symbolic
 * parameter?.
 */
#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000
#define TABWIDTH 4

int cntspace(int col)
{
	int space = TABWIDTH - col % TABWIDTH;

	return space;
}

int mgetline(char s[], int max)
{
	int c;
	int len = 0;

	while (--max > 0 && (c = getchar()) != EOF && c != '\n')
		s[len++] = c;
	if (c == '\n')
		s[len++] = '\n';
	s[len] = '\0';

	return len;
}

void detab(char s[])
{
	int c;
	int i = 0;
	int col = 1;
	int space;

	while (c = s[i]) {
		if (s[i] == '\t') {
			space = cntspace(col);
			while (space-- >= 0) {
				col++;
				putchar(' ');
			}
		} else if (s[i] == '\n') {
			col = 1;
			putchar(c);
		} else {
			putchar(c);
			col++;
		}
	i++;
	}
}
		

int main(void) 
{
	char line[MAXLINE];
	int len;

	while ((len = mgetline(line, MAXLINE)) > 0)
		detab(line);

	return EXIT_SUCCESS;
}

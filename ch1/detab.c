/* 
 * Filename:    deetab.c
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
#define TABSWIDTH 4

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
	int k;

	while (c = s[i]) {
		if (s[i] == '\t')
			for (k = 0; k < TABSWIDTH; k++)
				putchar(' ');
		else
			putchar(c);
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

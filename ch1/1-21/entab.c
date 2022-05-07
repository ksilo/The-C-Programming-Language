/* 
 * Filename:    entab.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        07-MAY-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 1-21, page 34
 *
 * Write a program entab that replaces strings of blanks by the minimum
 * number of tabs and blanks to achieve the same spacing. Use the same
 * tab stops as for detab. When either a tab or a single blank would
 * suffice to reach a tab stop, which should be given preference?
 */
#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000
#define TABWIDTH 4

int spacing(int blank)
{
	int space;
	
	space = blank % TABWIDTH;
	return space;
}
int tabing(int blank, int space)
{
	int tab;

	tab = (blank - space) / TABWIDTH;
	return tab;
}

int mgetline(char s[], int max)
{
	int c;
	int i = 0;

	while(--max > 0 && (c = getchar()) != EOF && c != '\n') 
		s[i++] = c;
		if (c == '\n') 
			s[i++] = c;
		s[i] = '\0';
	return i;
}

int entab(char s[])
{
	int c;
	int i = 0;
	int blank = 0;
	int space;
	int tab;

	while (s[i])
		if (s[i] == ' ') {
			while (s[i] == ' ') {
				blank++;
				i++;
			}
			space = spacing(blank);
			tab = tabing(blank, space);

			while(tab-- > 0) {
				putchar('\t');
			}
			while (space-- > 0)
				putchar(' ');
		}
		else {
			putchar(s[i]);
			i++;
		}
		space = spacing(blank);
		tab = tabing(blank, space);
		printf("space %d, tab %d\n", space, tab);
}

int main(void)
{
	char line[MAXLINE];
	int len;

	while((len = mgetline(line, MAXLINE)) > 0)
		entab(line);

	return EXIT_SUCCESS;
}

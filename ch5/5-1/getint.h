/*
 * Filename:    getint.h
 * Author:      xilo <xilo@rgl.lt>
 * Date:        06-APR-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-1, page 97
 *
 * As written, getint treats a + or - not followed by a digit as a valid
 * representation of zero. Fix it to push such a character back on the
 * input.
 */

int getch(void);
void ungetch(int c);
int getint(int *pn);


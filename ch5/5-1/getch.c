/*
 * Filename:    getch.c
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

#include <stdio.h>

#define BUFFSIZE 100

char buf[BUFFSIZE];   // buffer for ungetch
int bufp = 0;         // next free position in buf

int getch(void) {     // get a (posiblly pushed back) character
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) { // push character back on input
    if (bufp >= BUFFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

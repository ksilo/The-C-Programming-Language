/*
 * Filename:    getfloat.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        08-APR-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-2, page 97
 *
 * Write getfloat, the floating-point analog of getint. What type does
 * getfloat returns as its function value?
 */

#include <stdio.h>

#define BUFFSIZE 100

char buf[BUFFSIZE];    // buffer for ungetch
int bufp = 0;          // next free position in buf

int getch(void)        // get a (posiblly pushed back) character
{
        return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)    // push character back on input
{
        if (bufp >= BUFFSIZE)
                printf("ungetch: too many characters\n");
        else
                buf[bufp++] = c;
}

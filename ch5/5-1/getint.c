/*
 * Filename:    getint.c
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
#include <ctype.h>
#include "getint.h"

/* getint: get next integer from input into *pn */
int getint(int *pn) 
{
        int c;
        int sign;

        while (isspace(c = getch()))          // skip while space
                ;
        if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
                ungetch(c);
                return 0;
        }
        sign = (c == '-') ? -1 : 1;
        if (c == '-' || c == '+')
                c = getch(); 
        if (c == EOF)
                return c;
        if (!isdigit(c)) {                    // if what comes after the sign isn't a number
                ungetch(c);                       // push both it 
                ungetch((sign == 1)? '+' : '-');  // and sign back on the input buffer
                return 0;
                }
        }
        for (*pn = 0; isdigit(c); c = getch())
                *pn = 10 * *pn + (c - '0');
        *pn *= sign;
        if (c != EOF)
                ungetch(c);
        return(c);
}

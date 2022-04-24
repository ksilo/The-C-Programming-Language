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
#include <ctype.h>
#include "getfloat.h"

int getfloat(float *pn) 
{
        int c; 
        int sign; 
        int power = 1;

        while (isspace(c = getch()))     // skip white space
                ;
        if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
                ungetch(c);              // not a number
                return 0;
        }
        sign = (c == '-')? -1 : 1;
        if (c == '-' || c == '+') 
                c = getch();
        if (!isdigit(c)) {
                ungetch(c);
                ungetch((sign < 0) ? -1 : 1);
                return 0;
        }
        for (*pn = 0; isdigit(c); c = getch())
                *pn = 10 * *pn + (c - '0');
        if (c == '.' | c == ',')
                c = getch();    
        for (*pn; isdigit(c); c = getch()) {
                *pn = 10 * *pn + (c - '0');
                power *= 10;
        }   
        *pn = (*pn * sign) / power;
        if (c != EOF)
                ungetch(c);
        return c;
}


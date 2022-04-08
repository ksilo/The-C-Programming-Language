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
#include <stdlib.h>
#include "getfloat.h"

int main(void) {
    int r;
    float i;

    r = getfloat(&i);

    if (r > 0)
        printf("%g\n", i);
    else if (r == 0)
        printf("error: not a number!");
    else if (r == EOF)
        printf("End of File");
    else
        printf("wtf just happend?");
    return EXIT_SUCCESS;
}



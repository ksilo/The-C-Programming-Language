/*
 * Filename:    main.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        12-APR-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-5, page 107
 *
 * Write versions of the library functions strncpy, strncat and strncmp, 
 * which operate on at most the first n characters of their argument strings. 
 * For example, strncpy(s,t,n) copie at most n characters of t to s.
 * Full descriptions are in Appendix B.
 */
#include <stdio.h>
#include <stdlib.h>
#include "libfunc.h"

int main(void) {
    char destination[1000];
    char source[] = "Luke, I am your father";
    char source2[] = "Try not. Do or do not. There is no try";

    char str1[] = "Skywalker Anakin";
    char str2[] = "Skywalker Luke";

    my_strncpy(destination, source, 18);
    printf("strncpy: %s\n", destination);

    my_strncat(destination, source2, 34);
    printf("strncat: %s\n", destination);

    printf("strncmp: %d\n", my_strncmp(str1, str2, 11));

    return EXIT_SUCCESS;
}


/*
 * Filename:    main.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        11-APR-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-4, page 107
 *
 * Write the function strend(s,t), which returns 1 if the string 
 * t occurs at the end of the string s, and zero otherwise. 
 */
#include <stdio.h>
#include <stdlib.h>

int strend(char *s, char *t);

int main(void) {
    char s[] = "Answer to the Ultimate Question of Life,"
               " the Universe, and Everything is 42";
    char t[] = "42";
    char w[] = "542";    

    printf("%d\n", strend(s,t));
    printf("%d\n", strend(s,w));

    return EXIT_SUCCESS;
}

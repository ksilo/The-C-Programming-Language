/*
 * Filename:    main.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        11-APR-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-3, page 107
 *
 * Write  a pointer version of the function strcat that we showed
 * in Chapter 2: strcat(s,t) copies the string t to the end of s.
 */

// strcat implementation
#include <stdio.h>
#include <stdlib.h>

void my_strcat(char *s, char *t);

int main(void) {
    char s[1000] = "I have played "; // s must be big enough
    char t[] = "ghiribizzi!";

    my_strcat(s, t);
    printf("%s\n", s);
}

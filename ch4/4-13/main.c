/*
 * Filename:    main.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        28-MAR-2010
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 4-13, page 88 
 *
 * Write a recursive version of the function reverse(s), which
 * reverses the string s in place. 
 */

#include <stdio.h>
#include <string.h>

void reverse(char s[], int start, int len) 

int main() 
{
        char s[] = "karbauskis";
        int start = 0;
        int len = strlen(s)-1;

        reverse(s, start, len);
        printf("%s\n", s);
}

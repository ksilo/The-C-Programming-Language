/*
 * Filename:    strcat.c
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

// strcat: concatenate t to end of s
void my_strcat(char *s, char *t) {
    while (*s)  // iterate while the read character is not the null character
        *s++; 
    
    while (*s++ = *t++)
        ;
    *s = '\0';
}

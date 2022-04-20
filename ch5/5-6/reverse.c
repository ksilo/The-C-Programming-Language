/*
 * Filename:    reverse.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        20-APR-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-6, page 107
 *
 * Rewrite appropriate programs from earlier chapters and exercises
 * with pointers instead of array indexing. Good posibilities include getline
 * (Chapters 1 and 4), atoi, itoa, and their variants (Chapter 2, 3 and 4),
 * reverse (Chapter 3). and strindex and getop (Chapter 4).
 */

// reverse: reverse char array s in place
void reverse(char *s) {

    char *p, tmp;

    p = s;
    while (*p != '\0') // find address of last element
       *p++; 
    while(p - s > 0) { // compare string length
        tmp = *s;      // swapt last to first element
        *s++ = *--p;
        *p = tmp;
    }
}

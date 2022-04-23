/*
 * Filename:    getline.c
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
 * reverse (Chapter 3), and strindex and getop (Chapter 4).
 */

// getline: get line into array s, return length
int my_getline(char *s, int lim) {

    char c, *p;

    p = s; // p points to s
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n') 
        *s++ = c;
    
    if (c == '\n') 
        *s++ = c;
    
    *s = '\0';

    return s - p;
}

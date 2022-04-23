/*
 * Filename:    itoa.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        21-APR-2022
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

// itoa: convert n to characters in s
void itoa(int n, char *s) {

    int sign;
    char *p = s;     // pointing to first element of array s
    
    if ((sign = n) < 0) {
        n *= -1;     // make n positive
    }

    while (n > 0) {
        *p++ = (n % 10) + '0';
        n /= 10;
    }

    if (sign < 0)
        *p++ = '-';
    *p = '\0';
    
    reverse(s); //defined in the same folder
}

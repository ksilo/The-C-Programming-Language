/*
 * Filename:    atoi.c
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

// atoi: convert string number stored in s[] to integer;
int atoi(char *s) 
{
        int n = 0, 
        int sign;

        while (isspace(*s)) // skip white space
                *s++;
        sign = (*s == '-') ? -1 : 1;
        if (*s == '+' || *s == '-') // skip sign if present
                *s++;
        while (isdigit(*s))
                n = 10 * n + (*s++ - '0');
        return sign * n;
}                                                                              

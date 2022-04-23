/*
 * Filename:    getop.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        23-APR-2022
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

// getop: get next operator or numeric operand
int getop(char *s) {
    int i, c;

    while ((*s = c = getch()) == ' ' || c == '\t')
        ;
    *++s = '\0';
    if (!isdigit(c) && c != '.')
        return c;
    if (isdigit(c))
        while (isdigit(*s++ = c = getch()))
            ;
    if (c == '.')
        while(isdigit(*s++ = c = getch()))
            ;
    *s = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}

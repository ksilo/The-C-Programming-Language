/*
 * Filename:    strindex.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        22-APR-2022
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

// strindex: returns index of t in s, else -1
int strindex(char *s, char *t) {

    char *ps = s;
    char *pt = t;
    char *pss;     // pointer to pointer


    while (*ps++ != '\0') {
        for (pss = ps; *pt != '\0' && *pss == *pt; *pss++, *pt++) 
            ;
        if((pt - t) > 0 && *pt == '\0') 
            return ps - s; // return index
    }
    return -1;
}

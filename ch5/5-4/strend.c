/*
 * Filename:    strend.c
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

// strend: returns 1 if the string t occurs at the end of the string s, else 0
int strend(char *s, char *t) 
{
        char *pt = t;        // creating pointer for tracking len of string t

        while (*s)           // setting pointer to the end of string s 
                *s++; 
        while (*t)           // setting pointer to the end of string t 
                *t++;
        while (*pt++)
                if (*--s != *--t)
                        return 0;
        return 1;            
}

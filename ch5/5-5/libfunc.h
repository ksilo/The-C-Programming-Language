/*
 * Filename:    libfunc.h
 * Author:      xilo <xilo@rgl.lt>
 * Date:        12-APR-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-5, page 107
 *
 * Write versions of the library functions strncpy, strncat and strncmp, 
 * which operate on at most the first n characters of their argument strings. 
 * For example, strncpy(s,t,n) copie at most n characters of t to s.
 * Full descriptions are in Appendix B.
 */
void my_strncpy(char *s, char *t, int n);
void my_strncat(char *s, char *t, int n);
int my_strncmp(char *s, char *t, int n);


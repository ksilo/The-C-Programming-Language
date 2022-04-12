/*
 * Filename:    libfunc.c
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

//strncpy: copies up to n characters from the string pointed to, by t to s.
void my_strncpy(char *s, char *t, int n) {
    int count;

    for (count = 0; count < n; count++)
        *s++ = *t++;
    *s = '\0';
}

// strncat: appends the string pointed to by t to the end of the s up to n characters long.
void my_strncat(char *s, char *t, int n) {
    int count;

    while (*s) // setting pointer to the end of s
        *s++;

    for (count = 0; count < n; count++)
        *s++ = *t++;
    *s = '\0';
}

/* strncmp: compares at most the first n bytes of s and t.
 *        return value < 0 str1 is less than str2
 *        return value > 0 str2 is less than str1
 *        return value = 0 str1 is equal to str2
 */
int my_strncmp(char *s, char *t, int n) {
    int count;

    for(count = 0; count < n; count++)
        if (*s != *t)
            return *s - *t;
        else {
            *s++;
            *t++;
        }
    return 0;
}

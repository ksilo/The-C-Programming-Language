/*
 * Filename:    reverse.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        28-MAR-2010
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 4-13, page 88 
 *
 * Write a recursive version of the function reverse(s), which
 * reverses the string s in place. 
 */

// reverse: reverses the string s in place
void reverse(char s[], int start, int len) 
{
        char temp;
        
        temp = s[start];     // swaping first and last chars
        s[start] = s[len];
        s[len] = temp;

        if (len != ((start++ + len--) / 2)) {
                reverse(s, start, len); // calling function recursivelly
        }
}

int main() {
    char s[] = "karbauskis";

    int start = 0;
    int len = strlen(s)-1;

    reverse(s, start, len);
    printf("%s\n", s);
}

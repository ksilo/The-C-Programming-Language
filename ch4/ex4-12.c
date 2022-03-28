/* Exercise 4-12. Adapt the ideas of printd to write a recursive version of itoa;
 * that is, convert an integer into a string by calling a recursive routine */

#include <stdio.h>

// itoa: converts integer n into string s
void itoa(int n, char s[]) {

	static int i = 0; // recursion tracking

	if (n < 0) {
		n = -n;
	    s[i++] = '-';
	}

	if (n / 10) 
		itoa(n / 10, s);
	s[i++] = n % 10 + '0';
	s[i] = '\0';
}

int main() {
	char s[12];
	int n = -142345;

	itoa(n, s);
	printf("%s\n", s);
}

/* Exercise 4-14. Define a macro swap(t, x, y) that interchanges two arguments
 * of type t. (Block structure will help.) */

#include <stdio.h>

//debuging print macro
#define dprint(expr) printf(#expr ": = %d\n", expr)
// macro swap: interchanges two arguments of type t
#define swap(t, x, y)			\
	t temp;			        \
	temp = x;			\
	x = y;				\
	y = temp;			\
	


int main() { 
	int x = 200;
	int y = 500;

	printf("before swaping:\n");
	puts("--------------------");
	dprint(x);
	dprint(y);
	printf("\n");
	swap(int, x, y);
	printf("after swaping:\n");
	puts("--------------------");
	dprint(x);
	dprint(y);
}

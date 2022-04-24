/*
 * Filename:    main.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        29-MAR-2010
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 4-14, page 91 
 *
 * Define a macro swap(t, x, y) that interchanges two arguments
 * of type t. (Block structure will help.) 
 */

#include <stdio.h>
#include "swap.h"

int main() 
{ 
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

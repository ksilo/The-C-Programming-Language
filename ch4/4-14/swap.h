/*
 * Filename:    swap.h
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

//debuging print macro
#define dprint(expr) printf(#expr ": = %d\n", expr)
// macro swap: interchanges two arguments of type t
#define swap(t, x, y)			\
	t temp;			        \
	temp = x;			\
	x = y;				\
	y = temp;			\

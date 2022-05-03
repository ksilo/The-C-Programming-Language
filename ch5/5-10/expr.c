/* 
 * Filename:    expr.c
 * Author:      xilo <xilo@rgl.lt>
 * Date:        03-MAY-2022
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 5-10, page 118
 *
 * Write a program expr, which evaluates a reverse Polish
 * expression from the command line, where each operator or operand is a separate
 * argument. For example 
 *	expr 2 3 4 + *
 * evaluates 2 x (3 + 4)
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{

	int count = 0;
	int res = 0;
	int temp;

	char **opp;
	char **nump;

	opp = argv;
	nump = argv;

	**opp++;
	**nump++;

	while (isdigit(**opp)) {
		**opp++;
		**nump++;
		count++;
	}
	while (count++ < argc-1)
		switch(**opp++) {	
			case '+':
				res = atoi(*--nump) + ((res)? res : atoi(*--nump));
				break;
			case '-':
				temp = atoi(*--nump);
				res = ((res)? temp: atoi(*--nump)) - ((res)? res : temp);
				break;
			case '*':
				res = atoi(*--nump) * ((res)? res : atoi(*--nump));
				break;
			case '/':
				temp = atoi(*--nump);
				if (!temp && !res) {
					puts("error: division by zero");
					exit(1);
				} else
					res = ((res)? temp: atoi(*--nump)) / ((res)? res : temp);
				break;
		}
	printf("result:%d\n", res);
}

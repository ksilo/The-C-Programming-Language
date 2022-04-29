#include <stdio.h>
#include <stdlib.h>

// echo command line arguments 2st version
int main(int argc, char *argv[])
{
	while (--argc > 0)	
		printf("%s%s", *++argv, (argc > 1) ? " ": "");
	printf("\n");
	return EXIT_SUCCESS;
}

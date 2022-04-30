#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int mgetline(char *line, int max);

char line[MAXLINE];
int found = 0;

// find: print lines that match pattern from 1st arg
int main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Usage: find pattern\n");
	else 
		while(mgetline(line, MAXLINE) > 0)
			if (strstr(line, argv[1]) != NULL) {
				printf("%s", line);
				found++;
			}
	return found;
}

	

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINE 1000

int mgetline(char *line, int MAX);

int main(int argc, char *argv[])
{
	char line[MAXLINE];
	int c; 
	int lineno = 0;
	int except = 0;
	int number = 0;
	int found = 0;

	while (--argc > 0 && (*++argv)[0] == '-')
		while (c = *++(argv[0]))
			switch(c) {
				case 'x':
					except = 1;
					break;
				case 'n':
					number = 1;
					break;
				default:
					printf("error\n");
					argc = 0;
					found = -1;
					break;
			}
		if (argc != 1)
			printf("error\n");
		else
			while (mgetline(line, MAXLINE) > 0) {
				lineno++;
				if ((strstr(line, *argv) != NULL) != except) {
					if (number)
						printf("%d.", lineno);
					printf("%s", line);
					found++;
				}
			}
		return found;
}


//ERRORES
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno;

int main(int argc, char const *argv[])
{
	FILE *file = fopen("nothing.txt", "r");
	if (file == NULL)
	{
		perror("Falla");

		char *errorString = strerror(errno);
		fprintf(stderr, "<Falla> %s\n", errorString);

		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
	puts("final");
	return 0;
}
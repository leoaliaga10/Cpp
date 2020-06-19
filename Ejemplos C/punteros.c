/* programa.c -- 
 * author: Leoncio Aliaga
 * date: MM DD YYYY
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *one = "uno";

	printf("%p -> %c\n", one, *one);
	
	char *two = one + 1;

	printf("%p -> %c\n", two, *two);

	int serie[] = {3, 9, 11, 40};
	printf("%p -> %d\n", serie, serie[0]);
	
	int *four = serie+1;
	printf("%p -> %d\n", four, *four);

	return 0;
}
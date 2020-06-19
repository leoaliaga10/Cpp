/* programa.c -- 
 * author: Leoncio Aliaga
 * date: MM DD YYYY
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char gender = 'f';

	if (gender == 'm')
	{
		printf("hombre");
	}
	else if (gender == 'f')
	{
		puts("mujer");
	}

	int age = 25;

	if (age > 12 && age < 18)
	{
		puts("\nadolecente");
	}

	char character = 'U';
	switch(character)
	{
		case 'a':
			puts("alpha");
			break;
		case 'b':
		case 'B':
			puts("beta");
			break;
		default:
			puts("¿?");
	}

	return 0;
}
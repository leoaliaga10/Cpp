/* programa.c -- 
 * author: Leoncio Aliaga 
 * date: MM DD YYYY
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int numbers[] = {20, 40, 87, 190, 200};

	int count = sizeof(numbers)/sizeof(int);

	printf("Numero de elementos: %d\n", count);

	printf("Indice\tValor\n");

	for (int i = 0; i < count; i++)
	{
		printf("%d \t \t %d\n", i, numbers[i] );
	}

	int stop = 20;
	int step = 0;
	puts("\nWHILE \n");
	while (step < stop)
	{
		printf("%d\n", step);
		step++;
	}

	return 0;
}
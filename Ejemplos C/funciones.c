/* programa.c -- 
 * author: Leoncio Aliaga
 * date: MM DD YYYY
*/

#include <stdio.h>

int biggest(int numA, int numB)
{
	int result;

	if (numA > numB)
	{
		result = numA;
	}
	else if (numA < numB)
	{
		result = numB;
	}

	return result;
}

int sumar(int a, int b)
{
	int suma;
	suma = a + b;
	return suma;
}

int main(int argc, char const *argv[])
{
	int max = biggest(86, 50);
	printf("%d\n", max);

	int maxB = biggest(1, 900);
	printf("%d\n", maxB);

	int suma = sumar(34,90);
	printf("Suma: %d\n", suma);
	return 0;
}
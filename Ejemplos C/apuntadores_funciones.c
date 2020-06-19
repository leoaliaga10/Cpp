/* programa.c -- 
 * author: Leoncio Aliaga
 * date: MM DD YYYY
*/

#include <stdio.h>

typedef int (*compare_func)(int a, int b);

int compare(int a, int b, compare_func compare_algorithm)
{
	printf("%d %d\n", a, b);
	int result = compare_algorithm(a, b);
	return result;
}

int max(int a, int b)
{
	int result;
	if (a > b)
	{
		result = a;
	}
	else
	{
		result = b;
	}
	return result;
}

int min(int a, int b)
{
	int result;
	if (a < b)
	{
		result = a;
	}
	else
	{
		result = b;
	}
	return result;
}

int main(int argc, char const *argv[])
{
	int compA = compare(8, 90, max);
	printf("max %d\n", compA);

	int compB = compare(8, 90, min);
	printf("min %d\n", compB);
	return 0;
}
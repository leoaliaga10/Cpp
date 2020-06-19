/* programa.c -- 
 * author: Leoncio Aliaga
 * date: MM DD YYYY
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Cat
{
	char *name;
	int birth;
	float weight;
} Cat;

typedef long long int BigInt;

int main(int argc, char const *argv[])
{
	Cat *dan = malloc(sizeof(Cat));
	dan->name = "Dan";
	dan->birth = 2009;
	dan->weight = 3.980f;

	printf("Name: %s Birth: %d Weight: %f\n", dan->name, dan->birth, dan->weight);

	// free(dan->owner);
	free(dan);

	BigInt bInt = 45;

	printf("%lld\n", bInt);

	return 0;
}
/* programa.c -- 
 * author: Leoncio Aliaga Saldaña
 * date: MM DD YYYY
*/
//INPUT Y OUTPUT
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char twitter[140];
	int tweets;

	printf("Twitter username: @");
	scanf("%s %d", twitter, &tweets);

	printf("https://twitter.com/%s (%d tweets)\n", twitter, tweets);
	return 0;
}
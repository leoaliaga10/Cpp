/* programa.c -- arreglos
 * author: Leoncio
 * date: MM DD YYYY
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char chain[] = "Hola mundo";
	// char chain[] = {'H', 'o', 'l', 'a', '\0'};
	printf("Chain: %s Chain size: %ld Char size: %ld\n", chain, sizeof(chain), sizeof(char));

	int serie[] = {7, 8, 90, 120};
	long int serieSize = sizeof(serie);
	printf("Size of serie: %ld Integer size: %ld\n", serieSize, sizeof(int));
	return 0;
}
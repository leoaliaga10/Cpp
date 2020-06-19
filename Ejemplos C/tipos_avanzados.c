/* programa.c -- 
 * author: Leoncio Aliaga
 * date: MM DD YYYY
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int integer = 9;
	printf("%lu\n", sizeof(integer));

	short int sh = 9;
	printf("%lu\n", sizeof(sh));

	long int lng = 9;
	printf("%lu\n", sizeof(lng));

	signed int sinteger = 9;
	printf("%lu\n", sizeof(sinteger));

	unsigned int uinteger = 128;
	printf("%lu\n",sizeof(uinteger));

	float const ftl = 3.14159f;
	// ftl = 2.56f;
	printf("%lu\n", sizeof(ftl));

	enum boolean
	{
		NO,
		YES
	};

	printf("No = %d\n", NO);
	printf("Yes = %d\n", YES);

	return 0;
}
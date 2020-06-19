/* programa.c -- 
 * author: Leoncio Aliaga
 * date: MM DD YYYY
*/

#include <stdio.h>

#ifndef APP_ID
	#define APP_ID "com.empresa.app\n"
 	// #undef APP_ID
#endif

#ifndef trace
 #define trace(integer) printf("File: %s Line: %d Int: %d\n", __FILE__, __LINE__, integer);
#endif

int main(int argc, char const *argv[])
{
	printf(APP_ID);
	trace(8)
	return 0;
}
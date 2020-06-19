/*CASTING*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int scalar = 4;
	float five = 5.3f;
	double pi = 3.14159;
	char c = 'c';//99

	float scalarFive = scalar+five;
	double scalarPi = scalar+pi;
	int scalarc = scalar+c;

	float scalarf = (float)scalar;

	printf("%f\n", scalarFive);
	printf("%f\n", scalarPi);
	printf("%d\n", scalarc);

	printf("%f\n", scalarf);
	return 0;
}
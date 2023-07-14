#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)

{
	printf("size of char : % zu bytes\n", sizeof(char));
	printf("size of int : % zu bytes\n", sizeof(int));
	printf("size of short : % zu bytes\n, sizeof(short));
	printf("size of long int : % zu bytes\n", sizeof(long));
	printf("size of long long int : % zu bytes\n", sizeof(long long));
	printf("size of float : % zu bytes\n", sizeof(float));
	printf("size of double : % zu bytes\n", sizeof(double));
	printf("size of long double : % zu bytes\n", sizeof(long double));
	return 0;

}


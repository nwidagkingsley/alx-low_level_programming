#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)

{
		char a;
		int b;
		long int c;
		long long int d;
		float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of int: %lu byte(s)\n",(unsigned long) sizeof(b));
	printf("size of a long int: %lu byte(s)\n", sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("siz of a float: %lu bytes(s)\n",(unsigned long) sizeof(f));
	return (0);

}


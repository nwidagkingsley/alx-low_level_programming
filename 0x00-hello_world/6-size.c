#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)

{
	printf("size of char : %lu bytes\n", sizeof(char));
	printf("size of int : %lu bytes\n", sizeof(int));
	printf("size of long int : %lu bytes\n", sizeof(long));
	printf("size of long long int : %lu bytes\n", sizeof(long long));
	printf("size of float : %lu bytes\n", sizeof(float));
	return (0);

}


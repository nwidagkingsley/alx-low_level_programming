#include "main.h"

/**
 * factorial - returns the fatoria of a particular number
 * @n: number to be returend he factorial from
 * Return: factorial of n after the program
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

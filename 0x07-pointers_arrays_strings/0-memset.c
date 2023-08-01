#include "main.h"

/**
 * _memset - this function fills memory with a constant byte
 * @s: this is the area we are going to fill with byte
 * @b: this is the constant byte
 * @n: number of byte
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		s[i] = b;
	return (s);
}

#include "main.h"

/**
 * print_alphabet-x10 - Make alphabet x10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar('\n');
	}
}

#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: this is the sting that we are going to print
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

#include "main.h"

/**
 * _puts_recursion - wrting string twiche
 * @s: this is the variable that input numbers
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

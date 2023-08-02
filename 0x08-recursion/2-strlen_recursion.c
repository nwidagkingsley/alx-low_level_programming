#include "main.h"
/**
 * _strlen_recursion - this returns the lenght of a string.
 * @s: this is the string we are going to count
 *
 * Return: we are returning the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int lenghtsti = 0;

	if (*s)
	{
		lenghtsti++;
		lenghtsti += _strlen_recursion(s + 1);
	}
	return (lenghtsti);
}

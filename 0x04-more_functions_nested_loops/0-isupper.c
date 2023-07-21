#include "main.h"

/**
 * _isupper - checks for upprcase character
 * @c: function parameters
 * Return: 1 on success 0 on faailure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

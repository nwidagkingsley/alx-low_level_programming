#include "main.h"

/**
 * _isdigit - function hat checs for 0 and 1
 * @c: parameer t be checked
 * Return: 1 on success and zero on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

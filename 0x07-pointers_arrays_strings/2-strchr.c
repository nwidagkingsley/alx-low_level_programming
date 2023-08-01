#include "main.h"

/**
 * _strchr - string copyng
 * @s: this is the strig we are going to search for
 * @c: this is the cahracter we are going to search for in s
 * Return: this wil return a value
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s ==  c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}

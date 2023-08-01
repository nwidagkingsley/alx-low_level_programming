#include "main.h"

/**
 * _strspn - spans through numbers
 * @s: string tto search from
 * @accept: string to search
 * Return: any nmber
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}

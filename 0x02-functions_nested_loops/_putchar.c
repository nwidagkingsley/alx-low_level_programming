#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The characte to print
 * Description: 'i got it, it is for putchar'
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

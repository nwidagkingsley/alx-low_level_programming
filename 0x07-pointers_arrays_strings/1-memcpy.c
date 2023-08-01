#include "main.h"

/**
 * _memcpy - this copies int memory from source to dest
 *@dest: this is the place we are copying to
 *@src: where we aree copying from
 *@n: number of bytes we are copying
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n ; x++)
		dest[x] = src[x];
	return (dest);
}

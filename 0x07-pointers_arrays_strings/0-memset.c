#include "main.h"

/**
 * memset - fill a block of memory with a specific value
 *
 * Description: fills a block of memory with a specific value
 *
 * @s: a pointer to the memory area to be filled
 * @b: the character to fill the memory area with
 * @n: the number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}

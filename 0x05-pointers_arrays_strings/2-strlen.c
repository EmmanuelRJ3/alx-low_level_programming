#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * Description: returns the length of a string
 *
 * @s: the strong to get the length of
 *
 * Return: the length of @str
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

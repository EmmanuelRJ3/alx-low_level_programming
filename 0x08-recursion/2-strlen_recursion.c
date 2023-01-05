#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * Description: function measures lenght of a string
 *
 * @s: string to be measured
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
	return (len);
}

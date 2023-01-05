#include "main.h"

/**
 * _print_rev_recursion - prints string backwards
 *
 * Description: function prints strings backwards
 *
 * @s: string to print rev
 *
 * Return: Always 0
 *
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

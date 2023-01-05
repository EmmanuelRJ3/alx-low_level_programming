#include "main.h"

/**
 * _puts_recursion - clone of puts with recursion
 *
 * Description: function clones of puts with recursion
 *
 * @s: string to print
 *
 * Return: Always 0 (Success)
 *
 */
void _puts_recursion(char *s)
{

	if (*s !)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
	
		putchar('\n');
	
}

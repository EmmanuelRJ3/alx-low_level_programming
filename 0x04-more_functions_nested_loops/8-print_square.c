#include "main.h"

/**
 * print_square - draws a square
 * @size: length and width of a square
 *
 * Return: void
 *
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; ++j)
	{
		for (j = 0; j < size; ++j)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

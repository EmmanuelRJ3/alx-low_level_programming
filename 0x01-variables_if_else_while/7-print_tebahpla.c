#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * maint - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}

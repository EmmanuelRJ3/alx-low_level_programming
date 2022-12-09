#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print pairs of double digit combos
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, m;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			m = j + 1;
			k = i;
			while (k < 58)
			{
				while (m < 58)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					putchar(m);
					if 9i < 57 || j < 56 || k < 57 || m < 57)
					{
						putchar(44);
						putchar(32);
					}
					m++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(10);

	return (0);
}

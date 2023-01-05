#include "main.h"

/**
 * factorial - returns factors
 *
 * Description: function returns factors
 *
 * @n: num to factor
 *
 * Return: factor
 *
 *
 *
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

#include <stdio.h>
#include "main.h"

/**
 * main - prints out program name
 * @argc: number of args to be passed
 * @argv: strings passed
 * Return: alway 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);


	return (0);
}

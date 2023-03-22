#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * @n: num
 *
 * Description: <description>
 * Return: <return>
 */
void print_to_98(int n)
{
	int d;

	d = 1;
	if (n > 98)
		d = -1;
	while (n != 98)
	{
		printf("%d, ", n);
		n += d;
	}
	printf("%d\n", n);
}

#include "main.h"
/**
 * print_last_digit - entry point
 * @n: number
 *
 * Description: <description>
 * Return: <return>
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
		d *= -1;
	_putchar(d + '0');
	return (d);
}

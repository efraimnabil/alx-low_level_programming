#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	while (n > 0)
	{
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
		n >>= 1;
	}
}

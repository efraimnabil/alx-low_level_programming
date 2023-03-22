#include "main.h"

/**
 * 2-print_alphabet_x10.c
 *
 * Description: 2-print_alphabet_x10.c
 *
 * Return: 0 means no errors.
*/

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}

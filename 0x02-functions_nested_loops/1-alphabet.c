#include "main.h"

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0 means no errors.
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

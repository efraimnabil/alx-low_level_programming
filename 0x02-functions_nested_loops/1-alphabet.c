#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 * Description:  using _putchar user defined function
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

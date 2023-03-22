#include "main.h"
/**
 * times_table - entry point
 *
 * Description: <description>
 * Return: <return>
 */
void times_table(void)
{
	int a, b, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			d = a * b;
			if (d > 9)
				_putchar(d / 10 + '0');
			else if (b != 0)
				_putchar(' ');
			_putchar(d % 10 + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

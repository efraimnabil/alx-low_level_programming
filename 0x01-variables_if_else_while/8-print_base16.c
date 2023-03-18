#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0 means no errors.
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 97; i < 102; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

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
	char str[] = "_putchar";

	for (i = 0; i < 8; i++)
		putchar(str[i]);
	putchar('\n');
	return (0);
}

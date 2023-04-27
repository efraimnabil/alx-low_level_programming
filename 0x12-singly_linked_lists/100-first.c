#include <stdio.h>

void print_first(void) __attribute__ ((constructor));

/**
 * print_first - Prints a string before the main function is executed.
 *
 * Description:
 *  - The function prints a string to stdout before the main function is executed.
 *  - The function does not return anything.
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}

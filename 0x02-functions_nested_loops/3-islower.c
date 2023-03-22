#include "main.h"
#include <ctype.h>
/**
 * _islower - entry point
 * @c: character
 *
 * Description: <description>
 * Return: <return>
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

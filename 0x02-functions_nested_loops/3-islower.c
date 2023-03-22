#include "main.h"
#include <ctype.h>
/**
 * _islower - entry
 * @c - character
 * 
 * Description: <description>
 * Return: (0)
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

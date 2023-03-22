#include "main.h"
/**
 * _isalpha - entry point
 * @c: character
 *
 * Description: <description>
 * Return: <return>
 */
int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

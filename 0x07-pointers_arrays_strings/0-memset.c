#include "main.h"
#include <string.h>

/**
 * _memset -> memory set function
 * @s: string
 * @c: a character
 * @i: an integer
 * Return: a string
 */
char *_memset(char *s, char c, unsigned int i)
{
	unsigned int x;

	for (a = 0; a < i; x++)
		s[x] = c;
	return (s);
}

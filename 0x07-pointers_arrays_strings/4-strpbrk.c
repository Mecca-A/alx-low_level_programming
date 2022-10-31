#include "main.h"

/**
 * _strpbrk - searches for a string for any set of bytes.
 * @s: string to be searched.
 * @accept: the set of bytes to be searched for.
 *
 * Return: a pointer to the matched byte if a set if found.
 * if no set is matched - NULL.
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}

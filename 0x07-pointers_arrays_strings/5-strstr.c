#include "main.h"

/**
 * _strstr - locates a substring.
 * @s: string to be searched.
 * @f:substring to be located.
 * Return: pointer to the beginning of the located substring
 * if substring is located.
 * if the substring is not located - NULL.
 */

char *_strstr(char *s, char *f)
{
	int index;

	if (*f == 0)
		return (s);

	while (*s)
	{
		index = 0;

		if (s[index] == f[index])
		{
			do {
				if (f[index + 1] == '\0')
					return (s);

				index++;
			} while (s[index] == f[index]);
		}
		s++;
	}
	return ('\0');
}


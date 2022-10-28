#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int i, y;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *m = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (y = 0; x[y] != '\0'; y++)
		{
			if (s[i] == x[y])
			{
				s[i] = m[y];
				break;
			}
		}
	}
	return (s);
}

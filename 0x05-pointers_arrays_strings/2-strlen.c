#include "main.h"
#include <string.h>

/**
 * _strlen - Returns the length of a string
 * @s: string pointer
 *
 * Return: Length of the string
 */
int_strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
{
	len += 1;
}
	return (len);
}

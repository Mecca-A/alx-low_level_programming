#include "main.h"
#include <string.h>
/**
 * _strlen -> returns the length of a string
 * @str: string pointer
 * Return: returns length of the string
 */
size_t_strlen(const char *str)
{

	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}

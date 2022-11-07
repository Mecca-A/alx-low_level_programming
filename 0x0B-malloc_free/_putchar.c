#include <unistd.h>

/**
 * _putchar - writes caracter c to stdout
 * @c - character to print
 * Return: 1 (success)
 * return -1 on error and set errno appropriatelyy
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

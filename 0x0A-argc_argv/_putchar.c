#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1 (success)
 * return -1 on error and set errno appropriately 
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}

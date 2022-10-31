#include "main.h"

/**
 * _memcpy - copies @n bytes from the memory area pointed
 * to by the @src into the one pointed to by @dest
 * @src: source buffer to copy characters from
 * @dest: pointer to the memory area to copy @src into
 * @n: number of bytes to copy from @src
 * Return: a pointer to the destination buffer @dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}

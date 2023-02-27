#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: Parameter
 * @src: Parameter
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *f = dest;

	while (*src)
		*dest++ = *src++;
	return (f);
}

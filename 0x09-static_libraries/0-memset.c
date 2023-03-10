#include "main.h"
#include <string.h>

/**
 * *_memset - fills memory with a constant byte
 * @str: a pointer
 * @fill: a char
 * @num: an unsigned int
 * Return: Always 0.
 */

char *_memset(char *str, char fill, unsigned int num)
{
	char *result;

	result = memset(str, fill, num);

	return (result);
}

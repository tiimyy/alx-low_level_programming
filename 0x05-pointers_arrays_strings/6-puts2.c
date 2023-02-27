#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int l = 0, i = 0;

	while (str[l] != '\0')
		l++;

	l -= 1;

	for (; i <= l; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}

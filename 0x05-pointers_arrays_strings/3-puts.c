#include "main.h"
/**
  *_puts- prints a string followed my a new line
  *@str: this is  the function parameter
  *Return: Void
  */
void _puts(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
			break;
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}

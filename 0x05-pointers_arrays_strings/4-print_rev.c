#include "main.h"
/**
  *print_rev- prints a string in reverse
  *@s: parameter for function
  *Return: Void
  */
void print_rev(char *s)
{
	int i;
	int l;

	l = _strlen(s);
	for (i = l; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

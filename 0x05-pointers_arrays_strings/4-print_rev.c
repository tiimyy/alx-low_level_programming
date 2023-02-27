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

	for (l = 0; l >= 0; l++)
	{
		if (s[i] == '\0')
			break;
	}
	for (i = l; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

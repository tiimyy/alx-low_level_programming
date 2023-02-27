#include "main.h"
/**
  *print_rev- prints a string in reverse
  *@s: parameter for function
  *Return: Void
  */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;

	while (l)
		_putchar(s[--l]);

	_putchar('\n');
}

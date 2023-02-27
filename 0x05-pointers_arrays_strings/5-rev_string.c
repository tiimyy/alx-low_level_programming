#include "main.h"
/**
 * rev_string - a function that reverses a string
 * followed by a new line
 * @s: parameter string
 * Return: Void
 */
void rev_string(char *s)
{
	int l = 0, i = 0;
	char f;

	while (s[l] != '\0')
		l++;

	while (i < l--)
	{
		f = s[i];
		s[i++] = s[l];
		s[l] = f;
	}
}

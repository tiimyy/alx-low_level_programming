#include "main.h"
/**
  *_strlen- prints lenght of a string
  *@s: parameter
  *Return: lenght of s
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
		break;
	}
	return (i);
}

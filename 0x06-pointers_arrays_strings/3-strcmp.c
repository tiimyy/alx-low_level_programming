#include "main.h"
/**
  *_strcmp - compares two strings
  *@s1: first string to be compared
  *@s2: second string to be compared
  *Return: a value;
  */
int _strcmp(char *s1, char *s2)
{
	int i;
	int result;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
		}
	}
	return (result);
}

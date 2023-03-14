#include "main.h"
#include "stdlib.h"
/**
  *_strdup- rite a function that returns a pointer to a
    *newly allocated space in memory,
     *which contains a copy of the string given as a parameter.
     *@str: recieves a string
     *Return: Always
     */
char *_strdup(char *str)
{
	char *freshString;
	unsigned int i, j;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
	{
	}
	freshString = (char *) malloc(sizeof(char) * i + 1);
	if (freshString == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		freshString[j] = str[j];
	}
	return (freshString);
}


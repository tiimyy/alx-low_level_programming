#include "main.h"
/**
  *string_toupper- changes to uppercase
  *@str: takes in str
  *Return: str
  */
char *string_toupper(char *str)
{
	int i;
	int j;
	int lenght;
        
	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	lenght = j;
	for (i = 0; i < lenght; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}

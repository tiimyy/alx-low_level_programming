#include "main.h"
/**
  *_strcat - concatenates two strings
  *@dest: destination string
  *@src: Source string
  *Return: 0 always;
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j++];
	}
	if (dest[i] == '\0')
	{
		dest[i] == '\0';
	}
	return (dest);
}


#include "main.h"
/**
  *_strcat- concattenates two srtings
  *@dest: destination string
  *@src: source string
  *Return: always 0
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}

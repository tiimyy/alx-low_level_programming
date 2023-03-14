#include "main.h"
#include "stdlib.h"
/**
  *create_array - creates an array of chars,
     *and initializes it with a specific char.
  *@size : specifies the size of memory to be created
  *@c : the character that should be in the memory
  *Return: 0 always
  */
char *create_array(unsigned int size, char c)
{
	char *strMem;
	unsigned int i;

	strMem = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (strMem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		strMem[i] = c;
	}
	return (strMem);
}

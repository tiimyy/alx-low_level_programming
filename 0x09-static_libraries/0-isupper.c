#include "main.h"
/**
  *_isupper- checks for upper case
  *@c: paramter for _is upper function
  *Return: 0 always
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

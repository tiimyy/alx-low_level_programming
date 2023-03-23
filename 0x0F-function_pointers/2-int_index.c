#include "function_pointers.h"
/**
  *int_index- searches an integer
  *@array: an array of numbers
  *@size: specifies the size of the array
  *@cmp: a pointer to a function
  *Return: returns an integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}

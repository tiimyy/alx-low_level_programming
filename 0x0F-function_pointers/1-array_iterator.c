#include "function_pointers.h"
/**
  *array_iterator- prints each element of an array followed by a newline.
  *@array: array of numbers
  *@size: size of array
  *@action: pointer to a function
  *return: 0 Always
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	for (i=0; i<size; i++)
	action(array[i]);
}

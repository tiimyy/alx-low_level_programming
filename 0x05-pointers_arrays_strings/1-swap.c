#include <stdio.h>
/**
  *swap_int- a function to swap
  *@a: first parameter
  *@b: second parameter
  *Return: 0 always
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

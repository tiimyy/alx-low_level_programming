#include "main.h"
#include <stdio.h>
/**
  *sum- print sum for multiples of 3 and 5 of numbers below 1024
  *Return: 0 always;
  */
void sum(void)
{
	int num = 1024;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + 1;
		}
	}
	printf("%d\n", sum);
}
/**
  *main- Entry point
  *Return: Always 0
  */
int main(void)
{
	sum();
	return (0);
}

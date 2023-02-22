#include "main.h"
#include <stdio.h>
/**
  *sum- print sum for multiples of 3 and 5 of numbers below 1024
  *Return: 0 always;
  */
void sum(void)
{
	int num = 1024;
	int sum3 = 0;
	int sum5 = 0;
	int sum15 = 0;
	int sum;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3)
		{
			sum3 = sum3 + num;
		}
		if (num % 5)
		{
			sum5 = sum5 + num;
		}
		if (num % 15 == 0)
		{
			sum15 = sum15 + num;
		}
	}
	sum = sum3 + sum5 - sum15;
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

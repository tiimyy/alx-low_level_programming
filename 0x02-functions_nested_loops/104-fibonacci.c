#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */

int main(void)
{
	int count = 3;
	long int total_sum;

	long int first = 0, second = 1;
	long int next = first + second;

	while (count > 0 && next <= 4000000)
	{
		if (next % 2 == 0)
		{
			total_sum += next;
		}
		first = second;
		second = next;
		next = first + second;
		count++;
	}
	printf("%ld", total_sum);

	return (0);
}

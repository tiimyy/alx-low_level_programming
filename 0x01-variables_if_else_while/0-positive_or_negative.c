#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
	 *main - Entry point
	 *Created Variable n.
	 *Used conditional statements.
	 *Description:checkif variable n is a negative, positive number or zero.
	 *Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
printf("%d is positive\n", n);
	else if 
(n == 0)printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
	return (0);
}

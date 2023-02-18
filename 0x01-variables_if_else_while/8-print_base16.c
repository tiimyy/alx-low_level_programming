#include <stdio.h>
/**
 *main-Entry point
 *Return: 0 ALWAYS
 */
int main(void)
{
	int loop_num;

	int loop_alpha;

	for (loop_num = 0; loop_num < 10; loop_num++)
	putchar('0' + loop_num);
	for (loop_alpha = 0; loop_alpha < 6; loop_alpha++)
	putchar('a' + loop_alpha);
	putchar('\n');
	return (0);
}

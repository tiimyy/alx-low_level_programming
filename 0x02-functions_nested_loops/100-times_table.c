#include "main.h"
/**
  *times_table(void)- prints timetable
  *Return: Void
  */
void print_times_table(int n)
{
        int i;
        int j;
        int k;

        for (i = 0; i <= n; i++)
        {
        for (j = 0; j <= n; j++)
        {
        k = j * i;
        if (j == 0)
        {
        _putchar(k + '0');
        }
        if (k <= n && j != 0)
        {
        _putchar(',');
        _putchar(' ');
        _putchar(' ');
        _putchar(k + '0');
        }
        else if (k >= n)
        {
        _putchar(',');
        _putchar(' ');
        _putchar ((k / n) + '0');
        _putchar ((k % n) + '0');
        }
        }
        _putchar('\n');
        }

}

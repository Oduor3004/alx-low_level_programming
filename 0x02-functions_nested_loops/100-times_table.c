#include "main.h"

/**
 * print_time_table - Prints time table,
 * starting with 0.
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)
{
	int num, mult, i;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (mult = 1; mult <= n; mult++)
	{
	_putchar(',');
	_putchar(' ');
	i = num * mult;
	if (i <= 99)
	_putchar(' ');
	if (i <= 9)
	_putchar(' ');
	if (i >= 100)
	{
	_putchar((i / 100) + '0');
	_putchar(((i /10) % 10) + '0');
	}
	else if (i <= 99 && i >=10)
	{
	_putchar((i / 10) + '0');
	}
	_putchar((i % 10) + '0');
	}
	_putchar('\n');
	}
	}
}


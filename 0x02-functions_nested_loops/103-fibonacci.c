
#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000
 * Return: Nothing!
 */

int main(void)

{

	int a = 0;
	long j = 1, m = 2, sum = m;

	while (m + j < 4000000)
	{
	m += j;
	if (m % 2 == 0)
	sum += m;
	j = m - j;
	a++;
	}
	printf("%ld\n", sum);
	return (0);
}




#include <stdio.h>

/**
 * main - prints the first 52 fibonacci numbers
 * Return: Nothing!
 */
int main(void)

{
	int a;
	long j = 1, k = 2;

	for (a = 0; a < 50; a++)
	{
	if (a == 0)
	printf("%ld", j);
	else if (a == 1)
	printf(", %ld", k);
	else
	{
	k += j;
	j = k - j;
	printf(", %ld", k);
	}
	}
	printf("\n");
	return (0);
}

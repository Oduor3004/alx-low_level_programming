#include<stdio.h>

/**
 * mian -  prints the alphabet in lowercase
 * Return Always 0 (Success)
 *
 */

int main(void)
{
	int low, e, q;
	e = 'e';
	q = 'q';
	
	for (low = 'a'; low<= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');
	return (0);
}

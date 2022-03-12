#include <stdio.h>
/**
 * main- block
 * Description: print all single numbers from 0
 * followed by newline, using 'putchar'
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}

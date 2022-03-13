#include <stdio.h>
/**
 * main - main block
 * Description : return numbers printed in ascending order
 * print all the possible combinations of single digit numbers
 * numberss must be separated by commas and space
 * you are only allowed to use 4 'putchar'
 * Return : 0 (Success)
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');
			if (i < 9)
			{
				putchar(44);
				putchar(32);
			}
			i++;
	}
	putchar('\n');
	return (0);
}

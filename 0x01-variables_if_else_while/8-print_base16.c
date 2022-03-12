#include <stdio.h>
/**
 * main - block
 * Description - Prints all numbers of base16 in lower case
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
{
	putchar(i + '0');
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}

#include "main.h"
/**
 * main - prints alphabet in lowercase followed by a new line
 *
 * Result: always 0
 */
int main(void)
{
	char c;
	c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}


#include <stdio.h>
#include <unistd.h>

/**
 * main - prints output
 *
 * Return 0 if true
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2005-10-19\n" , 59);
	return (1);
}
